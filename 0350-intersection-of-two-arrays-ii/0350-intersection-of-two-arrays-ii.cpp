class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    //      // If the size of nums1 is greater than nums2, swap them...
    //     if(nums1.size() > nums2.size()) {
    //         swap(nums1, nums2);
    //     }
    //     unordered_map<int,int> mp;
    //     for(auto val: nums1) mp[val]++;
    //     int k = 0;
    //     for(auto val: nums2) 
    //    {// For each element in nums2, check if count of that element in nums1 is positive or not...
    //         // If count of nums2[idx] in array nums1 is positive, then add this element(nums2[idx]) in result array...
    //         if(mp[val] > 0){
    //             nums1[k++] = val;
    //             // Decrease the count of this element in Hash map.
    //             --mp[val];
    //         }
    //     }
    //     return vector<int>(nums1.begin(), nums1.begin()+k);

    int i =0;
    int j=0;
    vector<int> ans;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i]<nums2[j]) i++;
        else j++;
    }
    return ans;
    }
};