class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0;
        for(auto x:nums){
            int c =0;
            while(x){
                x=x/10;
                c++;
            }
              if ((c & 1) == 0) ans++;
        }
        return ans;
    }
};