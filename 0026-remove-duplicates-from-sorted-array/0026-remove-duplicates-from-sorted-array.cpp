/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
{
    int res=1; // number of distinct  elements
    for(int i=1;i<nums.size();i++)
    { if(nums[i]!=nums[res-1])
         {
             nums[res]= nums[i] ; //no. of distinct elements
             res++;
         }
    }
return res;}
}; */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
{
    int distinct = 1; //first element is already distinct
    for(int i=0;i<nums.size()-1;i++) if(nums[i]!=nums[i+1]) nums[distinct++] = nums[i+1];
    return distinct;
}
};