class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> mp;
        for (int num:arr){
            if(mp.find(num*2)!=mp.end()||num%2==0 && mp.find(num/2)!=mp.end()) return true;
            mp.insert(num);
        }
        return false;
            
        }
    
};