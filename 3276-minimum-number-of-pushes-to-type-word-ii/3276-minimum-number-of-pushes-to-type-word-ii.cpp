class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26);
        for(char c: word) freq[c-'a']++;
        sort(freq.begin(),freq.end(),greater<int>());
        int push =1,ans=0;
        for(int i=0;i<26 && freq[i]!=0;i++){
            if(i>=8 && i%8==0) push++; // increase after each 8 digits
            ans+= freq[i]*push;
            
        }
        return ans;
    }
};