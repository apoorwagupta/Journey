class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(auto &s: operations){
          if (s == "++X" || s == "X++") X++;
          else X--;
        }
        return X;
    }
};