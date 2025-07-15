const createHomeView = require('/views/auth/homeView');

const VALID_USERNAME = 'aditiids';
const VALID_PASSWORD = 'nasalove';

const createLoginView = () => {
    const win = Ti.UI.createWindow({
        backgroundColor: '#000000',
        navBarHidden: true
    });

    const centerContainer = Ti.UI.createView({
        layout: 'vertical',
        center: { x: '50%', y: '50%' },
        width: '85%',
        height: Ti.UI.SIZE
    });

    const Xlogo = Ti.UI.createImageView({
        image: '/assets/images/X_neww.png',
        top: 75,
        bottom: 10,
        width: 80,
        height: 50
    });

    const headingLabel = Ti.UI.createLabel({
        text: 'See what\'s happening in the world right now.',
        color: '#FFFFFF',
        font: { fontSize: 26, fontWeight: 'bold' },
        textAlign: 'left',
        width: Ti.UI.FILL,
        bottom: 30
    });

    const inputStyle = {
        color: '#1DA1F2',
        hintTextColor: '#888888',
        borderStyle: Ti.UI.INPUT_BORDERSTYLE_NONE,
        width: Ti.UI.FILL,
        height: 50,
        font: { fontSize: 16 },
        paddingLeft: 10,
        paddingRight: 10
    };

    const underlineStyle = {
        backgroundColor: '#333333',
        height: 1,
        width: Ti.UI.FILL,
        bottom: 20
    };

    const usernameField = Ti.UI.createTextField({
        ...inputStyle,
        hintText: 'Username',
        autocapitalization: Ti.UI.TEXT_AUTOCAPITALIZATION_NONE
    });

    const usernameUnderline = Ti.UI.createView(underlineStyle);

    const passwordField = Ti.UI.createTextField({
        ...inputStyle,
        hintText: 'Password',
        passwordMask: true
    });

    const passwordUnderline = Ti.UI.createView(underlineStyle);

    const loginButton = Ti.UI.createButton({
        title: 'Log In',
        width: '100%',
        height: 50,
        backgroundColor: '#FFFFFF',
        color: 'black',
        borderRadius: 25,
        top: 30
    });

    const forgotPassword = Ti.UI.createLabel({
        text: 'Forgot password?',
        color: '#FFFFFF',
        font: { fontSize: 14, fontWeight: 'bold' },
        textAlign: 'center',
        top: 20
    });

    loginButton.addEventListener('click', () => {
        const username = usernameField.value.trim();
        const password = passwordField.value.trim();

        if (!username || !password) {
            alert('Please enter both username and password');
            return;
        }

        if (username === VALID_USERNAME && password === VALID_PASSWORD) {
            Ti.App.Properties.setBool('isLoggedIn', true);
            const homeView = createHomeView();
            homeView.open();
            win.close();
        } else {
            alert('Invalid credentials. Please try again.');
        }
    });

    // Assemble UI
    win.add(Xlogo);

    centerContainer.add(headingLabel);
    centerContainer.add(usernameField);
    centerContainer.add(usernameUnderline);
    centerContainer.add(passwordField);
    centerContainer.add(passwordUnderline);
    centerContainer.add(loginButton);
    centerContainer.add(forgotPassword);

    win.add(centerContainer);
    win.open();

    return win;
};

module.exports = createLoginView;
