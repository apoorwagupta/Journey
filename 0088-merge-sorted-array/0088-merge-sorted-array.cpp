/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i =0, j=0;
    int k =0; // final 
    while(i<m && j<n) { nums1[k++] = (nums1[i]<nums2[j])?nums1[i++]:nums2[j++];}
    while(i<m)  nums1[k++] = nums1[i++];
    while(j<n) nums1[k++] = nums2[j++];
    }
};*/

    /*
class Solution {
public:
        nums1.resize(m);
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k= m+n-1;
        int i=m-1, j=n-1;
        while (i>=0 && j>=0){
            if (nums1[i]>nums2[j]){
                nums1[k]= nums1[i];
                i--;
            }
            else{
                nums1[k]= nums2[j];
                j--;
            }
            k--;
        }
        while (j>=0){
            nums1[k--]= nums2[j--];
        }
    }
};