class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty())
            return ans;

        int p1 = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != nums[i - 1] + 1) {
                if (p1 == nums[i - 1]) {
                    ans.push_back(to_string(p1));
                } 
                else {
                    ans.push_back(to_string(p1) + "->" + to_string(nums[i - 1]));
                }
                p1 = nums[i];
            }
        }
        if (p1 == nums.back()) {
            ans.push_back(to_string(p1));
        } 
        else {
            ans.push_back(to_string(p1) + "->" + to_string(nums.back()));
        }
        return ans;
    }
};