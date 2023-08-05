class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> fill(1002,0);
        for(auto trip : trips) {
             for(int i= trip[1];i<trip[2];i++) {
                 fill[i]+= trip[0];
                 if(fill[i]>capacity) return false ;
         } }
        return true;
    }
};