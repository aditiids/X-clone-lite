const POSTS_API_URL = 'https://jsonplaceholder.typicode.com/posts';

const fetchPosts = (onSuccess, onError) => {
    const client = Ti.Network.createHTTPClient({
        onload: function () {
            try {
                const posts = JSON.parse(this.responseText);
                onSuccess(posts);
            } catch (error) {
                onError(error);
            }
        },
        onerror: onError,
        timeout: 5000
    });

    client.open('GET', POSTS_API_URL);
    client.send();
};

module.exports = { fetchPosts };
