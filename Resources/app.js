const createLoginView = require('/views/auth/loginView');
const createHomeView = require('/views/app/homeView');

const isLoggedIn = Ti.App.Properties.getBool('isLoggedIn', false);

let mainWindow;
if (isLoggedIn) {
    mainWindow = createHomeView();
} else {
    mainWindow = createLoginView();
}

// Use NavigationWindow for iOS native navigation stack
const navWin = Ti.UI.createNavigationWindow({
    window: mainWindow
});
navWin.open();

// Give other windows access to navWin via global property (if needed)
Ti.App.navWin = navWin;
