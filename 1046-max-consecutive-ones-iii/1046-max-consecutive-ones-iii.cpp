class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,ans=0,cnt=0;
        int n = nums.size();
    
        while(r<n){
            if(nums[r]==0) cnt++;
            while(cnt>k){
                if(nums[l]==0) cnt--;
                l++;
            }
            ans=max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};