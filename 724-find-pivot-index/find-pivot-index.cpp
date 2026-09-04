class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftmost(n);
        leftmost[0] = 0;
        vector<int>rightmost(n);
         rightmost[n-1] = 0;
        for(int i=1;i<n;i++)
        {
            
            leftmost[i]=leftmost[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
           
            rightmost[i]=rightmost[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(leftmost[i]==rightmost[i])
            {
                return i;
            }
        }
        return -1;
    }
};