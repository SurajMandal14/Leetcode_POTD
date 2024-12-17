class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>vec(26,0);
        int i=25;
        for(char &ch:s)
        {
            vec[ch-'a']++;
        }
        string result;
        while(i>=0)
        {
            if(vec[i]==0)
            {
                i--;
                continue;
            }
            char ch='a'+i;
            int freq=min(vec[i],repeatLimit);
            result.append(freq,ch);
            vec[i]-=freq;
            if(vec[i]>0)
            {
                int j=i-1;
                while(j>=0 && vec[j]==0)
                {
                    j--;
                }
                if(j<0)
                    break;
                result.push_back('a'+j);
                vec[j]--;
            }
            
            
        }
        return result;
    }
};