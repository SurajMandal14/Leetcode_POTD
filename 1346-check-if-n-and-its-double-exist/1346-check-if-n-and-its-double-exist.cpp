class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int j;
       for(int i=0;i<arr.size();i++)
       {
           j=0;
           while(j<arr.size()){
           if(i!=j && arr[i]==2*arr[j])
           {
               return true;
           }
           else
               j++;}
       }
        return false;
    }
};