class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=0;
        int sec_larg=0;
        for(int &num:nums)
        {
            if(num>largest)
            {
                sec_larg=largest;
                largest=num;
            }
            else
            {
                sec_larg=max(sec_larg,num);
            }
            
        }
        return ((largest-1) * (sec_larg-1));
    }
};