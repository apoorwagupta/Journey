class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        sort(deliciousness.begin(),deliciousness.end());
        unordered_map<int,int> mp;
        int ans = 0;
        int M = 1000000007;
        for(int i=0; i<deliciousness.size();i++){
            for(int p = 0; p <= 21; p++) {
                int power = 1 << p; //(x<<y) is equivalent to multiplying x with 2^y
                if(mp.find(power-deliciousness[i])!=mp.end()) ans+=mp[ power-deliciousness[i]];
                ans%=M;
            }
           mp[deliciousness[i]]++; // increasing the frequency of this element int the map;
        }
        return ans;
    }

};