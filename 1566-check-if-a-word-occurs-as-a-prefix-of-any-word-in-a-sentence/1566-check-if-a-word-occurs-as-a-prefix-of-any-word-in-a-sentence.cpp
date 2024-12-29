class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i=1;
        stringstream ss(sentence);
        string word;
       while(ss >> word)
       {
         if(word.substr(0, searchWord.size()) == searchWord) return i;
         i++;
       }
          return -1;
        }
      
    
};