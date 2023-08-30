class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col,int ecount, int &rescount,int cnt){
        int m = grid.size();
        int n = grid[0].size();
        
         if(grid[row][col]==2 ) {
         if(cnt==ecount) rescount++;
         return;
         }
         cnt++; //  You should increment cnt only after you check if the current cell is not destination, because in your main function you do not count the destination as an empty cell

        int temp = grid[row][col]; 
        grid[row][col] = -1; // vis
       
        int delrow[] = {-1,0,+1,0}; 
        int delcol[] = {0,+1,0,-1}; 
        
        for(int i =0;i<4;i++)
        { 
        int nrow = row +  delrow[i];
        int ncol = col +  delcol[i];
        if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]!=-1) {     
            dfs(grid,nrow,ncol,ecount,rescount,cnt);
        }
    }
    grid[row][col]= temp; //backtrack;
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int x=0,y=0;
        int rescount=0,cnt=0; // dfs from the starting position
        int ecount = 1;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) x=i,y=j;
                else if(grid[i][j]==0) ecount++;
            }
        }
      dfs(grid,x,y,ecount,rescount,cnt);
      return rescount;
    }
};
