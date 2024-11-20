class Solution {
public:
    string lastNonEmptyString(string s) {
        string ans = "";
        int maxi=0; 
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++; 
            maxi=max(mp[s[i]],maxi);}

       for(int i=s.size()-1;i>=0;i--){
        if(mp[s[i]]==maxi) ans = s[i]+ans;
        mp[s[i]]--;} 
        return ans;
    }
};