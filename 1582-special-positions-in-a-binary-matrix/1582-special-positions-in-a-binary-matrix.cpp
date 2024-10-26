class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        vector<int>Rowcount(m,0);
        vector<int>colcount(n,0);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1){
                    Rowcount[i]++;
                    colcount[j]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=1) continue;
                if(Rowcount[i]==1 && colcount[j]==1)
                    result++;
            }
        }
        return result;
    }
};