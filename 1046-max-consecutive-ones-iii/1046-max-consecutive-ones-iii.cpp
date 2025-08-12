class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,ans=0,cnt=0;
        int n = nums.size();
    
        while(r<n){
            if(nums[r]==0) cnt++;
            if(cnt>k){
                if(nums[l]==0) cnt--; // move l but maintain the prev window contant, although update it only whn we have k 0s
                l++;
            }
            if(cnt<=k)ans=max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};