class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int arr[n+1];
        for(int i=0; i<n+1; i++){
            arr[i] = 0;
        }
    for(int i =0;i<trust.size();i++)
    {
        arr[trust[i][1]]++;
    }
        int res = -1;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==n-1){
               res= i;
                break;
            }
        }
        for(int i=0; i<trust.size();i++){
            if(trust[i][0]==res)
                return -1;
        }
        return res;
    }
};
    