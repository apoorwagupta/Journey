class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int  beauty =0;
        for(int i=0; i<=to_string(num).size()-k;i++){
            string newnum = to_string(num).substr(i,k);
            if( stoi(newnum)!=0 && num % stoi(newnum)==0) beauty++;
        }
        return beauty;
    }
};