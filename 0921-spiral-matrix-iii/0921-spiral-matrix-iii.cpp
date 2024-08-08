class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}}; // east, south, west, north
        vector<vector<int>> res;
        int steps = 1;
        int direction = 0;
        while(res.size()<rows*cols){
            for(int i=0;i<2;i++){
                for(int j=0; j<steps;++j){
                    if(rStart>=0 && rStart< rows && cStart>=0 && cStart<cols) res.push_back({rStart,cStart});
                rStart+= dir[direction][0];
                cStart+= dir[direction][1];
            }
           direction = (direction+1)%4;
        }
      steps++; // increment steps after 2 directions  after moving right or left
    }
    return res;
    }
};