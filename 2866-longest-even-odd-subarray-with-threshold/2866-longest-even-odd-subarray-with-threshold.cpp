class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int ans= 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0 && nums[i]<= threshold){
                int j = i;
                while (j < n && nums[j] <= threshold && (j == i || nums[j] % 2 != nums[j - 1] % 2)) {
                    j++;
                }
                ans = max(ans, j - i); // j is already past a valid index
                i = j-1;
            }

             
        }
  return ans;
    }
};