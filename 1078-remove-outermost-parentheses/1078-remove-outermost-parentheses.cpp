class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt =0;
        string ans;
        // equal ()
        for(char i:s){
            if(i== '(' && cnt++>0) ans.push_back(i);
            if(i== ')' && cnt-->1) ans.push_back(i);
        }
        return ans;
    }
};