class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt =0;
        for(auto &str: details){
            string substr = str.substr(11,2);
            if(stoi(substr)>60) cnt++;
        }
        return cnt;
    }
};