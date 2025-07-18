module.exports = function(tweet) {
    const win = Ti.UI.createWindow({
        backgroundColor: '#000',
        title: 'Tweet',
        layout: 'vertical' // Enables nav bar on iOS
    });

    const avatar = Ti.UI.createImageView({
        image: tweet.avatar,
        width: 64,
        height: 64,
        left: 24,
        top: 32,
        borderRadius: 32
    });

    const username = Ti.UI.createLabel({
        text: '@' + tweet.username,
        color: '#fff',
        font: { fontSize: 18, fontWeight: 'bold' },
        left: 24,
        top: 16
    });

    const tweetText = Ti.UI.createLabel({
        text: tweet.title + '\n\n' + tweet.body,
        color: '#e9e9e9',
        font: { fontSize: 17 },
        left: 24,
        right: 24,
        top: 24
    });

    win.add(avatar);
    win.add(username);
    win.add(tweetText);

    return win;
};
