class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> st(26,0),pt(26,0);
        vector<int> ans;
        for(auto x: s1) pt[x-'a']++; // mapping letters of p
        int k = s1.size();
        int i=0, j=0;
        while(j<s2.size()){
            st[s2[j]-'a']++;
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                if(st==pt) return true;
                st[s2[i]-'a']--;// to maintain the size of window
                i++;
                j++;
            }
    }
     return false;
    }
};
   