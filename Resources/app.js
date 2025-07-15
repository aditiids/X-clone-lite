const createLoginView = require('/views/auth/loginView');
const createHomeView = require('/views/auth/homeView');

const isLoggedIn = Ti.App.Properties.getBool('isLoggedIn', false);

if (isLoggedIn) {
    createHomeView().open();
} else {
    createLoginView().open();
}

