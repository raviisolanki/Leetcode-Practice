class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int start=0,end=0;
        while(start<n)
        {
            if(nums[start]==val)
            {
                start++;
            }
            else
            {
                nums[end]=nums[start];
                start++;
                end++;
            }
        }
        return end;
    }
};