class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
       
        if(mp.find(nums[i])!=mp.end() && abs(i-mp[nums[i]])<=k) return true; // present and diff is less
        mp[nums[i]]=i; // not present, update; or if present and not satisfying k,add recent value 

        }
        return false;
    }
};