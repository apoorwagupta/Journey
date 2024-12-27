class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int res = 0;
        int maxsofar = values[0];
        int i=0, j= values.size()-1;
        for (int i=1; i<values.size(); ++i){
             res= max(res, maxsofar+values[i]-i);
             maxsofar = max(maxsofar,values[i]+i);
        }
            
        return res;
    }
};