class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    string s1="qwertyuiop";
    string s2="asdfghjkl";
    string s3="zxcvbnm";  
    map<char,int> mp;
    for(auto &letter: s1) mp[letter]=1;
    for(auto &letter: s2) mp[letter]=2;
    for(auto &letter: s3) mp[letter]=3;
   vector<string>ans;
   for(auto &word: words){
      int i;
      for( i=1;i<word.size();i++){
       if(mp[tolower(word[i])]!=mp[tolower(word[i-1])]) break;
      }
      if(i==word.size()) ans.push_back(word);
   }
   return ans;
    }
};