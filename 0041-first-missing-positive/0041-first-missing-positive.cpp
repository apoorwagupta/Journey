/*class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> flag(nums.size()+1,false);
        for(auto num: nums)
            if(num>0) flag[num-1] = true; // for zero indexing 1 is at index 0
        for(int i=0;i<flag.size();i++)
            if(flag[i]==false) return i+1;
        return nums.size()+1; 
    }
};
*/
/// wtihout constant space
//positive means hasn't been flagged, negative means has been flagged

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

    //  mark numbers (num < 0) and (num > n) with a special marker number (n+1) 
    // we can ignore those because if all number are > n then we'll simply return 1
        int n = nums.size();
        for (int i = 0; i<n; i++) if (nums[i]<=0||nums[i]>n) nums[i] = n + 1;
    // All number in the array are now positive, and on the range 1-n+1    
    
        for(auto &i: nums) {
            int location = abs(i)-1; // -1 for zero index based array (so the number 1 will be at posn 0)
            // the first cell which isn't negative (doesn't appear in the array)
            if(location<n && nums[location]>=0) nums[location]*=-1; // marking that its present
        }
        // 4. no positive numbers were found, which means the array contains all numbers 1..n
        for(int i=0;i<n;i++) if(nums[i]>=0) return i+1;
        return n+1; 
    }
};
