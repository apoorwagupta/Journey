class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;//elts not eq to val
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){  //elts other than val
                nums[j++]=nums[i]; // placing in front
            }
        }
        return j;        
    }
};