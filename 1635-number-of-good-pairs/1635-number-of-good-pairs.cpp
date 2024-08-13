class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;
         for(auto &a:mp) {
            int n = a.second;
            cnt+= n*(n-1)/2;
         }
         return cnt;
    }
};