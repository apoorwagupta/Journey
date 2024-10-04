class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int  i=0,j=0;
        string ans;
        int n = word1.size()-1,m = word2.size()-1;
        while(i<=n || j<=m){
             if(i<=n) {ans.push_back(word1[i]); i++;}
             if(j<=m) {ans.push_back(word2[j]);j++;}
        }

        return ans;
    }
};