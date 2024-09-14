class Solution {
    public int longestSubarray(int[] nums) {
        int result=0;
        int streak=0;
        int maxnum=0;
        for(int num:nums){
            if(num>maxnum){
                maxnum=num;
                streak=0;
                result=0;
            }
            if(maxnum==num){
                streak++;
                
            }
            else{
                streak=0;
            }
            result=Math.max(streak,result);
        }
        return result;
    }
}