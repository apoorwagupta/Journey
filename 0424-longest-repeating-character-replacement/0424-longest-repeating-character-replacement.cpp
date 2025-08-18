class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,r=0,maxf=0,ans=0;
       // length - maxf = numb of chars to replace;
        while(r<s.length()){
            mp[s[r]]++;
            maxf = max(maxf,mp[s[r]]);
            int windowsize = r-l+1;
            if( windowsize-maxf >k){ // number of replaceables greater than k
               mp[s[l]]--;  //remove from window
               l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};