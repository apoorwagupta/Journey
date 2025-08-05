// class Solution {
// public:
//     int countKConstraintSubstrings(string s, int k) {
//         int n = s.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//         int c0 =0;
//         int c1 =0;
//             for(int j=i;j<n;j++){
//                 if (s[j] =='0')c0++;
//                 else c1++;
//                 if(c0<=k || c1<=k) count++;
//                 else break;
//             }}
// return count;
//         }         
        
// };


class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
       int l =0,r=0,c1=0,c0=0,ans=0;
       while(r<s.size()){
        s[r]=='0'? c0++: c1++;
        while(c0>k && c1>k){
            s[l]=='0'?c0--:c1--;
            l++; // shrink until valid
        }

        ans += (r-l+1); // all subs valid in l to r window ending at r
        // if a substring from l to r is valid then all substring starting from i and eding at r are val
        r++;
       }
        return ans;}
};