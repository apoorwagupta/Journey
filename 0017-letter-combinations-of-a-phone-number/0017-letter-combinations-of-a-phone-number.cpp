class Solution {
public:

    void  solve(string digits, string &output,int  ind, vector<string> &pad, vector<string>&ans){
        if(ind==digits.size()) {ans.push_back(output); return;}
        int number = digits[ind]-'0'; // to convert to int
        string value = pad[number];
        for(char c: value){
            output.push_back(c);
            solve(digits, output, ind+1, pad, ans);
            output.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()) return {};
        
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        int ind = 0;
        solve(digits, output, ind, pad, ans);
        return ans;

    }
};