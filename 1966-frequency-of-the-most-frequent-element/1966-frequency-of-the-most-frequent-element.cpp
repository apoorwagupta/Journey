class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long i=0, j=0,ans=1, sum =0;
        while(j<n){
            sum += nums[j]; //aj-ai = (j-i+1)*aj-sum
            if((j-i+1)*nums[j]-sum>k) sum-=nums[i++];
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};