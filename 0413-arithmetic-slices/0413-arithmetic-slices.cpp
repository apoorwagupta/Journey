class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int r=1,ans=0,cnt=0;
        if(nums.size()<3) return 0;
        int fdiff = nums[1]-nums[0];
       while(r<nums.size()-1){
          int diff = nums[r+1]-nums[r];
          if (diff== fdiff) cnt++;
          else {
             fdiff = diff;
             cnt=0;
            
          }
          ans+=cnt;
          r++;
       }
    return ans;
    }
};