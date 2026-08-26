class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=0;
        while(start<n)
        {
            if(nums[start]!=0)
            {
                swap(nums[end],nums[start]);
                end++;
            }
            start++;
        }
    }
};