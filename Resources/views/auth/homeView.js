const createHomeView = () => {
    const win = Ti.UI.createWindow({
        backgroundColor: 'black',
        navBarHidden: true
    });

   const logoutLabel = Ti.UI.createLabel({
    text: 'Log Out',
    color: '#FFFFFF',
    font: { fontSize: 14 },
    top: 60,
    right: 15,
    textAlign: 'right',
    touchEnabled: true,    // Ensure label can handle touch
    zIndex: 999             // Bring label to front
});


    logoutLabel.addEventListener('click', () => {
        Ti.App.Properties.setBool('isLoggedIn', false);

        // Redirect to LoginView
        const createLoginView = require('/views/auth/loginView');
        createLoginView();
        win.close();
    });

    const label = Ti.UI.createLabel({
        text: 'Welcome to home feed!',
        color: 'white',
        font: { fontSize: 24, fontWeight: 'bold' },
        textAlign: 'center',
        top: 100
    });

  

    win.add(label);
    win.add(logoutLabel);
    logoutLabel.zIndex = 10;

    return win;
};

module.exports = createHomeView;
