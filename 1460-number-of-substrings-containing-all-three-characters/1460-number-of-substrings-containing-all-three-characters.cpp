class Solution {
public:
    int numberOfSubstrings(string s) {
        int  l =0,r=0,n=s.length(),cnt=0;
        unordered_map<char,int> mp;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()==3){
                cnt += n-r; // number of substrings ending at that index
                mp[s[l]]--; // shrink the   window post calc the answer
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            r++;
        }
        return cnt;
    }
};