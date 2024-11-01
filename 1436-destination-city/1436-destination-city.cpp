class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>st;
        for(auto &path:paths)
        {
            string source=path[0];
            st[source]=1;
            
        }
        for(auto &path:paths)
        {
            string dest=path[1];
            if(st[dest]!=1)
                return dest;
            
        }
        return "";
    }
};