class Solution {
public:
string reverseWords(string s) {
int i = 0, end = s.size() ;
string res; // final result string
  while (i < end)
{
   while (i < end && s[i] == ' ' ) i++; // checking for spaces be string starts
          
          if(i>=end) break; // corner case
          int j= i+1; // end pointer for the word
          while (j < end && s[j] != ' ' ) j++; // increment till end of word
          
          string sub =  s.substr(i,j-i); // storing the substring
          if (res.size()==0)
            res = sub; //if first word then just append
         else 
            res = sub+ " " + res; // form the reversed string
            i = j+1; // new word starts from after the end of first word
}
  return res;  
} 
};