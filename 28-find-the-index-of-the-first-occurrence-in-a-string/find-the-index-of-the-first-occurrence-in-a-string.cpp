class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(n<m)
        {
            return -1;
        }
        for(int i=0;i<=n-m;i++)
        {
            bool same=true;
            for(int j=0;j<m;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    same=false;
                    break;
                }
            }
            if(same==true)
            {
                return i;
            }
        }
        return -1;
    }
};