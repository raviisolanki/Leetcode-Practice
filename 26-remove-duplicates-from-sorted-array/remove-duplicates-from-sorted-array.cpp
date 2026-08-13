class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> ans;
        int n=nums.size();
        int read=1,write=1;
        while(read<n)
        
           if(nums[read]==nums[read-1])
            {
               read++;
           }
           else
           {
            nums[write]=nums[read];
            write++;
            read++;
           }
        return write;
    }
};