class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int cal=0;
            cal=nums[i]*nums[i];
            ans.push_back(cal);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};