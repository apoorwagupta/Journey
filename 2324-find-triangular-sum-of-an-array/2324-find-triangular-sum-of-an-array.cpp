class Solution {
public:
    int triangularSum(vector<int>& nums) {
      int sum =0;
       while(nums.size()>1){
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++) v.push_back((nums[i]+nums[i+1])%10);
        nums = v;
       }
       return nums[0];
        // for(int i=0;i<nums.size();i++) sum+=nums[i];
        // return sum>10? sum%10:sum;
    }
};