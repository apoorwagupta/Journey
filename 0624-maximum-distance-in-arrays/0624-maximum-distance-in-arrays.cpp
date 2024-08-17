class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
       int mini = arrays[0][0];
      int maxi = arrays[0].back();
      int res = 0;
      for( int i = 1; i <= arrays.size()-1 ; i++)
      {  int amini = arrays[i][0];
         int amaxi = arrays[i].back();

               res = max(res, max(abs(amini-maxi),abs(amaxi-mini)));

               mini = min(mini, amini);
               maxi = max(maxi, amaxi);

               } return res; 
    }
};