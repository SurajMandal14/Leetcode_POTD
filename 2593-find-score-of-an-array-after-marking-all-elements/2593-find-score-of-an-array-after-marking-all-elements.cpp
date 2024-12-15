class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> vec(n);
        
        for(int i=0;i<n;i++)
        {
            vec[i]={nums[i],i};
            
        }
        sort(begin(vec),end(vec));
        vector<bool>visited(n,false);
        long long score=0;
        for(int i=0;i<n;i++)
        {
            int element=vec[i].first;
            int idx=vec[i].second;
            if(visited[idx]==false)
            {
                score+=element;
                visited[idx]==true;
                if(idx-1>=0 && visited[idx-1]==false)
                    visited[idx-1]=true;
                if(idx+1<n && visited[idx+1]==false)
                    visited[idx+1]=true;
                
            }
            
        }
        return score;
        
            
        
    }
};