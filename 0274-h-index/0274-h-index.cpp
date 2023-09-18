class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
         sort(citations.begin(),citations.end());
         int h=0;
         // 0,1,3,5,6;
         // max v st v papers have value >v
         if(citations[0]>=n) return n;
         
         for(int i=0;i<n;i++){
         if(citations[i]>=n-i) return n-i;  //n-i papers have value more/= than n-1
         }
         return 0;
    }
};