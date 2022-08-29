class Solution {
    
    void Dfs(int i,int j,int m,int n,vector<vector<char>>& grid){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]=='0'){
            return ;
        }
        grid[i][j]='0';
        
        Dfs(i+1,j,m,n,grid);
        Dfs(i-1,j,m,n,grid);
        Dfs(i,j-1,m,n,grid);
        Dfs(i,j+1,m,n,grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //using Dfs approach
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    Dfs(i,j,m,n,grid);
                    ans++;
                }
            }
        }
            return  ans;
    }
};