const homeController = require('/controllers/app/homeController');

module.exports = function() {
    const HEADER_HEIGHT = 56;
    const TAB_BAR_HEIGHT = 44;
    const NAV_BAR_HEIGHT = 54;
    const safeTop = (Ti.Platform.osname === "iphone" && Ti.Platform.safeAreaPadding)
        ? Ti.Platform.safeAreaPadding.top
        : 44;

    const win = Ti.UI.createWindow({
        backgroundColor: '#000',
        title: 'All Tweets',
        navBarHidden: true
    });

    // --- HEADER ---
    const header = Ti.UI.createView({
        top: safeTop,
        left: 0, right: 0,
        height: HEADER_HEIGHT,
        backgroundColor: '#000',
        layout: 'absolute',
        zIndex: 100
    });

    const profileAvatar = Ti.UI.createImageView({
        image: '/assets/images/demo_profile.png',
        width: 34, height: 34,
        borderRadius: 17,
        left: 16, top: 11,
        touchEnabled: true,
        zIndex: 101
    });

    const xLogo = Ti.UI.createImageView({
        image: '/assets/images/X_neww.png',
        width: 55, height: 36,
        top: 10,
        zIndex: 102
    });
    xLogo.addEventListener('postlayout', function() {
        xLogo.left = (Ti.Platform.displayCaps.platformWidth - xLogo.width) / 2;
    });

    header.add(profileAvatar);
    header.add(xLogo);
    win.add(header);

    // --- TABS: For You / Following ---
    let currentTab = 0;
    let tableView;
    let forYouRows = [];
    let followingRows = [];

    const tabsBar = Ti.UI.createView({
        top: safeTop + HEADER_HEIGHT,
        left: 0, right: 0,
        height: TAB_BAR_HEIGHT,
        backgroundColor: '#000',
        layout: 'horizontal'
    });

    const forYouLabel = Ti.UI.createLabel({
        text: 'For You',
        color: '#fff',
        font: { fontSize: 16, fontWeight: 'bold' },
        width: '50%',
        textAlign: 'center'
    });
    const followingLabel = Ti.UI.createLabel({
        text: 'Following',
        color: '#888',
        font: { fontSize: 16, fontWeight: 'normal' },
        width: '50%',
        textAlign: 'center'
    });

    tabsBar.add(forYouLabel);
    tabsBar.add(followingLabel);
    win.add(tabsBar);

    // --- Hamburger menu (profile avatar tap) ---
    profileAvatar.addEventListener('click', () => {
        const dialog = Ti.UI.createOptionDialog({
            options: ['Log Out', 'Cancel'],
            cancel: 1,
            title: 'Menu'
        });
        dialog.addEventListener('click', function(e) {
            if (e.index === 0) {
                Ti.App.Properties.setBool('isLoggedIn', false);
                const createLoginView = require('/views/auth/loginView');
                createLoginView().open();
                win.close();
            }
        });
        dialog.show();
    });

    // --- Helper for tweet row ---
    function createRow(post) {
        const row = Ti.UI.createTableViewRow({
            backgroundColor: '#000',
            selectionStyle: 'none',
            height: Ti.UI.SIZE
        });
        row.tweet = post;

        const tweetRow = Ti.UI.createView({
            layout: 'horizontal',
            backgroundColor: 'transparent',
            top: 12,
            left: 0,
            right: 0,
            bottom: 12,
            height: Ti.UI.SIZE
        });

        const avatar = Ti.UI.createImageView({
            image: post.avatar,
            width: 44, height: 44,
            borderRadius: 22,
            backgroundColor: '#333',
            left: 16
        });

        const contentCol = Ti.UI.createView({
            layout: 'vertical',
            left: 16,
            right: 16,
            height: Ti.UI.SIZE
        });

        const usernameLabel = Ti.UI.createLabel({
            text: '@' + post.username,
            color: '#fff',
            font: { fontSize: 15, fontWeight: 'bold' },
            left: 0, top: 0
        });

        const tweetLabel = Ti.UI.createLabel({
            text: post.title + '\n' + post.body,
            color: '#e9e9e9',
            font: { fontSize: 15 },
            top: 4, left: 0, right: 0
        });

        contentCol.add(usernameLabel);
        contentCol.add(tweetLabel);
        tweetRow.add(avatar);
        tweetRow.add(contentCol);
        row.add(tweetRow);

        const separator = Ti.UI.createView({
            height: 1.5,
            width: Ti.UI.FILL,
            backgroundColor: '#282828',
            bottom: 0,
            left: 0
        });
        row.add(separator);

        return row;
    }

    // --- Load data and set up TableView ---
    homeController.loadHomeData((posts) => {
        if (posts.length > 0 && posts[0].avatar) {
            profileAvatar.image = posts[0].avatar;
        }

        forYouRows = posts.map(post => createRow(post));
        followingRows = posts
            .filter((post, idx) => idx % 3 === 0)
            .map(post => createRow(post));

        tableView = Ti.UI.createTableView({
            data: forYouRows,
            backgroundColor: '#000',
            separatorColor: 'transparent',
            top: safeTop + HEADER_HEIGHT + TAB_BAR_HEIGHT,
            bottom: NAV_BAR_HEIGHT
        });

        tableView.addEventListener('click', function(e) {
            if (e.row && e.row.tweet) {
                const createTweetDetailView = require('/views/app/tweetDetailView');
                if (Ti.App.navWin) {
                    Ti.App.navWin.openWindow(createTweetDetailView(e.row.tweet));
                } else {
                    createTweetDetailView(e.row.tweet).open();
                }
            }
        });

        win.add(tableView);

        forYouLabel.addEventListener('click', function() {
            currentTab = 0;
            forYouLabel.font = { fontSize: 16, fontWeight: 'bold' };
            forYouLabel.color = '#fff';
            followingLabel.font = { fontSize: 16, fontWeight: 'normal' };
            followingLabel.color = '#888';
            tableView.setData(forYouRows);
        });
        followingLabel.addEventListener('click', function() {
            currentTab = 1;
            forYouLabel.font = { fontSize: 16, fontWeight: 'normal' };
            forYouLabel.color = '#888';
            followingLabel.font = { fontSize: 16, fontWeight: 'bold' };
            followingLabel.color = '#fff';
            tableView.setData(followingRows);
        });
    },
    (error) => {
        alert('Error loading tweets!');
    });

    // --- BOTTOM NAVIGATION BAR (local PNG icons) ---
    const navBar = Ti.UI.createView({
        left: 0, right: 0,
        bottom: 0,
        height: NAV_BAR_HEIGHT,
        backgroundColor: '#000',
        zIndex: 500,
        layout: 'horizontal'
    });

    // Use local paths for icons (matching your screenshot)
    const navIcons = [
        { path: '/assets/images/home.png', label: 'Home' },
        { path: '/assets/images/search.png', label: 'Search' },
        { path: '/assets/images/notification.png', label: 'Notifications' },
        { path: '/assets/images/messages.png', label: 'Messages' }
    ];

    navIcons.forEach(function(iconObj) {
        const iconBtn = Ti.UI.createView({
            width: Ti.Platform.displayCaps.platformWidth / navIcons.length,
            height: NAV_BAR_HEIGHT,
            layout: 'vertical'
        });
        const icon = Ti.UI.createImageView({
            image: iconObj.path,
            width: 28, height: 28,
            top: 13
        });
        iconBtn.add(icon);
        iconBtn.addEventListener('click', function() {
            const dummyWin = Ti.UI.createWindow({
                backgroundColor: '#000',
                title: iconObj.label,
                navBarHidden: false
            });
            if (Ti.App.navWin) Ti.App.navWin.openWindow(dummyWin);
            else dummyWin.open();
        });
        navBar.add(iconBtn);
    });

    win.add(navBar);

    return win;
};
