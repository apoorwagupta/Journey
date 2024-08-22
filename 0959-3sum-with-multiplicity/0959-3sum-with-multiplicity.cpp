class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
    unordered_map<int, long> mp;
    int n = arr.size(), mod = 1e9+7, ans = 0;

    for (int i=0;i<n;i++) {
       ans = (ans+ mp[target - arr[i]])%mod;
       for (int j= 0;j<i;j++){
         mp[arr[i] + arr[j]]++;
       }
    }

return ans;

    }
};