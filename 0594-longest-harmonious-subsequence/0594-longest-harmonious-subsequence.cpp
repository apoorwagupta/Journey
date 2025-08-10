class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size(),r=0,l=0,ans=0;
        while(r<n){
            int diff = nums[r]-nums[l];
            if(diff==1){
                ans = max(ans, r-l+1);
                r++;
            }
            else if (diff<1) r++; // diff 0, we can increase
            else l++; // to decrease the difference towards one
        }
        return ans;
    }
};