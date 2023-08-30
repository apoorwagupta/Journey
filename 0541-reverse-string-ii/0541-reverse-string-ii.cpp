class Solution {
public:
    string reverseStr(string s, int k) {
        int start =0;
        for(int i = 0; i<s.size();i+=2*k){
          if(i+k<=s.size())reverse(s.begin() + i, s.begin() + i + k);
          else reverse(s.begin() + i, s.end());  
        }
        return s;
        
        }
};