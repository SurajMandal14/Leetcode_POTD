class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
         priority_queue<int> pq(begin(gifts),end(gifts));
        long long sum=0;
        for(int& gift:gifts)
        {
            sum+=gift;
        }
        long long mysum=0;
        while(k--)
        {
            int remaining=pq.top();
            pq.pop();
            int newval=sqrt(remaining);
            mysum+=remaining-newval;
            pq.push(newval);
        }
        return sum-mysum;
    
    }
};