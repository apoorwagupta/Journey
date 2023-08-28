class Solution {
public:
/*
void dfs(vector<vector<int>>& grid,int row,int col, int &rescount){
        int m = grid.size();
        int n = grid[0].size();
        if(row<0 || row>=m || col<0 || col>=n || grid[row][col]==-1) return;
        if(row==m-1 && col==n-1) {
        rescount++;
        return; 
        }
        grid[row][col] = -1; // visited
        dfs(grid,row+1,col,rescount);
        dfs(grid,row,col+1,rescount);
        grid[row][col]= 0; //backtrack;
}
    int uniquePaths(int m, int n) {
    vector<vector<int>> grid(m,vector<int>(n,0));
    int rescount = 0;
    dfs(grid,0,0,rescount);
    return rescount;
    }
};
*/

int dfs(vector<vector<int>>& dp,int row,int col){
        
        if(row==0 && col==0) return 1; 
        if(row<0 ||  col<0 ) return 0;
        if(dp[row][col]!=-1) return dp[row][col];
        int down = dfs(dp,row-1,col);
        int right = dfs(dp,row,col-1);
        return dp[row][col] = down +  right; 
       
}
    int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m,vector<int>(n,-1));
    return dfs(dp,m-1,n-1);
    }
};   
/*
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        dp[1][1] = 1;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 && j == 1)
                    continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};
*/