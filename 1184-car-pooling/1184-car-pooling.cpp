/*class Solution {
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
}; */

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> fill(1001,0);
        for(auto trip : trips) {
            fill[trip[1]] +=trip[0];
            fill[trip[2]] -=trip[0];
        }
        int seating =0;
        for(int i= 0;i<fill.size();i++) {
           seating+= fill[i];
           if(seating>capacity) return false ;
        }
        return true;}};
