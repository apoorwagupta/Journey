class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0,j= nums.size()-1;
        int cnt=0;
        while(i<j){
            if(nums[i]+nums[j]==k){ cnt++;j--;i++;}
            else if(nums[i]+nums[j]<k) i++;
            else j--;
        }
    return cnt;
    }
};