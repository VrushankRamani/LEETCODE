class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         
        int res = nums[0];
        int end = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            end = max(nums[i], nums[i] + end);
            res = max(res, end);
        }
        return res;
    }
};