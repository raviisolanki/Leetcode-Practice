class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1;
        vector<int>ans;
        while(start<=end)
        {
            int cal=0;
            if(abs(nums[start])>abs(nums[end]))
            {
                cal=abs(nums[start])*abs(nums[start]);
                ans.push_back(cal);
                start++;
            }
            else
            {
                cal=abs(nums[end])*abs(nums[end]);   
                ans.push_back(cal); 
                end--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};