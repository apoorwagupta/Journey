class Twitter {
public:
map<int,unordered_set<int>> mp;
set<pair<int,pair<int,int>>,greater<pair<int,pair<int,int>>>> s;
int cntofPost;
    Twitter() {
        cntofPost=0;
    }
    
    void postTweet(int userId, int tweetId) {
        pair<int,pair<int,int>> p = {cntofPost,{userId,tweetId}};
        s.insert(p);
        cntofPost++;
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        unordered_set<int> st = mp[userId];
        set<pair<int,pair<int,int>>,greater<pair<int,pair<int,int>>>> :: iterator i;
        i = s.begin();
        
        while(ans.size()!=10 && i!=s.end()){
            pair<int,pair<int,int>> p = *i;
            if(st.count(p.second.first)==1 || p.second.first == userId) ans.push_back(p.second.second);
            i++;
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        mp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */