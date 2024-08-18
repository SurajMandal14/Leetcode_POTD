class Solution {
public:
    int nthUglyNumber(int n) {
        vector <int> Uglynum(n+1);
        int t2,t3,t5;
        t2=t3=t5=1;
        Uglynum[1]=1;
        for(int i=2;i<=n;i++)
        {
            int ugly2=Uglynum[t2]*2;
            int ugly3=Uglynum[t3]*3;
            int ugly5=Uglynum[t5]*5;
            int minugly=min({ugly2,ugly3,ugly5});
            Uglynum[i]=minugly;
            if(minugly==ugly2)
                t2++;
            if(minugly==ugly3)
                t3++;
            if(minugly==ugly5)
                t5++;
            
        }
        return Uglynum[n];
    }
};