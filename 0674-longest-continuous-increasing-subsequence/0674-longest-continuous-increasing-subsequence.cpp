class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l =0,r=1;
        int n = nums.size();
        int ans =1;
        int len =0;
        while(r<n){
            if(nums[r-1]<nums[r]) ans = max(ans,r-l+1);
            else {
            l=r; 
            }
            
            r++;
        }
        return ans;
    }
};