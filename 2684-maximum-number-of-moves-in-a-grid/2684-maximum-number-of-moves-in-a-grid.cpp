class Solution {
public:
    vector<int>move={-1,0,1};
    int row,col;
    
    int dfs(int r,int c, vector<vector<int>>& grid,vector<vector<int>>& t)
    {
        int moves=0;
        if(t[r][c]!=-1)
            return t[r][c];
        for(int &mov:move)
        {
            int new_r=r+mov;
            int new_c=c+1;
            
            if(new_r>=0 && new_r<row && new_c>=0 && new_c<col && grid[r][c]<grid[new_r][new_c])
            {
                moves= max(moves,1+ dfs(new_r,new_c,grid,t));
            }
        }
        return t[r][c]=moves;
        
    }
    int maxMoves(vector<vector<int>>& grid) {
        row=grid.size();
        col=grid[0].size();
        int result=0;
        vector<vector<int>>t(row,vector<int>(col,-1));
        for(int i=0;i<row;i++)
        {
            result=max(result,dfs(i,0,grid,t));
        }
        return result;
    }
};