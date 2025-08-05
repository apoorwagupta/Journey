class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        int count=0;
        for(int i=0;i<n;i++){
        int c0 =0;
        int c1 =0;
            for(int j=i;j<n;j++){
                if (s[j] =='0')c0++;
                else c1++;
                if(c0<=k || c1<=k) count++;
                else break;
            }}
return count;
        }         
        
};