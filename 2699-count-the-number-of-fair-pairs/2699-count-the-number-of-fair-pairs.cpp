class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // int ans =0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(lower <= nums[i] + nums[j] &&  nums[i] + nums[j]<= upper) ans++;
        //     }
        // }
        // return ans;

     int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) {
        int lwr = lower - nums[i], upr = upper - nums[i];
        ans += upper_bound(nums.begin()+i+1,nums.end(),upr)-lower_bound(nums.begin()+i+1,nums.end(),lwr);
        }
        return ans;
    }
};