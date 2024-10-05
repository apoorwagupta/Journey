class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0;i<n;i++)  {
            if(i+2<n && s[i+2]=='#'){
              int num = stoi(s.substr(i, 2));
              ans+= 'a'+ num -1;
              i+=2;
            }
            else ans += 'a'+ (s[i] - '1');
        }   
    return ans;      
        }
};