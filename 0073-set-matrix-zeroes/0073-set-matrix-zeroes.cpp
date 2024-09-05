class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vis = matrix;
        for(int i=0;i<n;i++){ 
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0) {
                     for(int k=0; k<m; k++) vis[i][k] = 0; // row zeros
                }
            }
        }

         for(int i=0;i<n;i++){ 
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0) {
                     for(int k=0; k<n; k++) vis[k][j] = 0; // col zeros
                }
            }
         }
           for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j] = vis[i][j];
            }
    }
} 
};