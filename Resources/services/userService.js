const fetchUsers = (count, onSuccess, onError) => {
    const client = Ti.Network.createHTTPClient({
        onload: function () {
            try {
                const users = JSON.parse(this.responseText).results.map(user => ({
                    username: user.login.username,
                    avatar: user.picture.medium
                }));
                onSuccess(users);
            } catch (e) {
                onError(e);
            }
        },
        onerror: onError,
        timeout: 6000
    });
    client.open('GET', `https://randomuser.me/api/?results=${count}`);
    client.send();
};

module.exports = { fetchUsers };
