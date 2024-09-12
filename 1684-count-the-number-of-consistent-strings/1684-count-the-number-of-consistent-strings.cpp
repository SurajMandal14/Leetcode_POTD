class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int mask=0;
        for(char &ch:allowed){
            mask=mask| (1<<(ch-'a'));
            
        }
        int count=0;
        for (string &word:words){
            bool allpresent=true;
            for (char &ch:word){
                if((mask >> (ch-'a') & 1)==0){
                    allpresent=false;
                    break;
                }
            }
            if(allpresent==true)
                count++;
        }
        return count;
    }
};