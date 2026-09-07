class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int left=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int right=total-left-nums[i];
            if(right==left)
            {
                return i;
            }
            else
            {
                left+=nums[i];
            }
        }
        return -1;

    }
};