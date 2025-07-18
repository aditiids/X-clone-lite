const postService = require('/services/postService');
const userService = require('/services/userService');

function loadHomeData(onSuccess, onError) {
    postService.fetchPosts((posts) => {
        userService.fetchUsers(posts.length, (users) => {
            // Merge each post with a user by index
            const merged = posts.map((post, idx) => ({
                ...post,
                username: users[idx]?.username || `user${idx + 1}`,
                avatar: users[idx]?.avatar ||
                    'https://abs.twimg.com/sticky/default_profile_images/default_profile_400x400.png'
            }));
            onSuccess(merged);
        }, onError);
    }, onError);
}

module.exports = { loadHomeData };
