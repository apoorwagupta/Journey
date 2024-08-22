class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        // two pointer approach
        // sorting because only min and max val asked and nothing bwteen ut
        int mod = 1e9 + 7;
        sort(nums.begin(), nums.end());
        int ans = 0;
        int l = 0,n=nums.size(),r = n-1;

        vector<int>pow2(n+1,1);
        for(int i=1;i<=n-1;i++) pow2[i]=(2*pow2[i-1])%mod;
        while(l<=r){
if(nums[l]+nums[r]<=target){
    ans= (ans+ pow2[r-l])%mod; // for this fixed i
    l++;
}
else r--; // if min i k sath nahi bana, then kisi ke sath nahi banega
      }
      return ans;
    }
};