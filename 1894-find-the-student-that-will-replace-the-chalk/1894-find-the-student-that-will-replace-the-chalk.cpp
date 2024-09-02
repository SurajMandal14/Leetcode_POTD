class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long sum=0;
        for(int &chalkreq:chalk){
            sum+=chalkreq;
        }
        int rem=k%sum;
        for(int i=0;i<n;i++)
        {
            if(rem<chalk[i])
                return i;
            rem=rem-chalk[i];
        }
        return -1;
    }
};