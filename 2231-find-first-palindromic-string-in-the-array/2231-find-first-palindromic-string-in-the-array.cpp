class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto& it:words){
            string reversedWord = it;
            reverse(reversedWord.begin(), reversedWord.end());
            if(reversedWord==it) return it;
        }
         return "";
    }
};