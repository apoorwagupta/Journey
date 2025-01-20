class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i=0,j=0;
        string ans = "",final="";
        if(str1 + str2 != str2+str1) return "";
        while(i<str1.size() && j<str2.size())
{       if(str1[i]==str2[j]){
        ans+= str1[i];
        if(str1.size()%ans.size()==0 && str2.size()%ans.size()==0) final = ans;
        }  
        i++;
        j++;
}
return final;
    }
};