class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int>pq(begin(nums),end(nums));
        while(k--)
        {
            int max_elem=pq.top();
            sum+=max_elem;
            pq.pop();
            max_elem=ceil(max_elem/3.0);
            pq.push(max_elem);
        }
        return sum;
    }
};