class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        string s="";
        int i=0;
        while(i<n)
        {
            int count=0;
            char ch=word[i];
            while(word[i]==ch && i<n && count<9)
            {
                count++;
                i++;
            }
            s+=to_string(count) + ch;
        }
        return s;
    }
};