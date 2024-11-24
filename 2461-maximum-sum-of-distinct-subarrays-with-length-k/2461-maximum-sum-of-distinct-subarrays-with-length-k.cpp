class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        long long result=0;
        long long sum=0;
        
        unordered_set<int>st;
        int i=0;int j=0;
        while(j<n)
        {
            while(st.count(nums[j]))
            {
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            sum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k){
                result=max(result,sum);
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
       return result;
    }
     
};