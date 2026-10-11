class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; ) {
            int cnt = 1;

            while (i + cnt < n && nums[i] == nums[i + cnt]) {
                cnt++;
            }

            if (cnt == 1) {
                sum += nums[i];
            }

            i += cnt;
        }

        return sum;
    }
};