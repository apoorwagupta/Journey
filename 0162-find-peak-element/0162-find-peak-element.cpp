class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // linear search if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) or use max-- O(n)
        // parts of array is sorted
        // both extreme sides -inf-- extreme elts can be peak as well
        // don't go towards the smaller type
         //l<=h when u are expecting to return from loop itself
        int l = 0;
        int r = nums.size()-1;
        int mid;
        int res=0;
        while(l<r){
            mid = l + (r-l)/2;
            // no two elts equal, no need of equality here
            if(nums[mid]<nums[mid+1]) l=mid+1; //posibility of encountering peak in the next elt, move towards it
            else r=mid;
        }
        return l; // return l for edge case [1,2]
    }
};