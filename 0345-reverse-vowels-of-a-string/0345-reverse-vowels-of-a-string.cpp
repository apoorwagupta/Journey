// class Solution {
// public:
//     string reverseVowels(string s) {
//         string ans = s;
//         int start =0;
//         int end = s.length()-1;
//         string vowels = "aeiouAEIOU";
//         while(start<end){
//             while(start<end && vowels.find(ans[start])==-1) start++;
//             while(start<end  && vowels.find(ans[end])==-1) end--;

//             swap(ans[start], ans[end]);
//             start++;
//             end--;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string reverseVowels(string s) {
    int start = 0;
    int end = s.length()-1;
    string ans = s;
    string vowels = "aeiouAEIOU";
    while(start<end){
        while(start<end  && vowels.find(s[start])==-1) start++;
        while(start<end  && vowels.find(s[end])==-1) end--;
        swap(ans[start], ans[end]);
        start++;
        end--;
    }
    return ans;
    }
    };
