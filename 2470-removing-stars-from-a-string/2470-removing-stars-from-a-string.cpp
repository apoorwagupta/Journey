class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string res;
        for(auto l: s) {
            if(l == '*' && !st.empty()) st.pop();
            else st.push(l);
        }
       
        while(!st.empty()){
            res+=st.top();
            st.pop();
            } 
        reverse(res.begin(),res.end());
        return res;
    }
};