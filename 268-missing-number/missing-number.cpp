class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>ans;
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)
            {
                return i;
            }
        }
        return n;
    }
};