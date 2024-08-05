class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      map<string,int> mp;
      for (auto &i:arr) mp[i]++;
      int cnt=1;
      for(auto &s:arr){
        if(mp[s]==1) {
            k--;
            if(k==0)  return s;
      }}
      return "";
    }    
};