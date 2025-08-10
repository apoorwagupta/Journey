class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(auto &[i,f]:mp){
            if(mp.find(i+1)!=mp.end()) ans = max(f+mp[i+1],ans); // add both counts for max subarry
        }
        return ans;
    }
};