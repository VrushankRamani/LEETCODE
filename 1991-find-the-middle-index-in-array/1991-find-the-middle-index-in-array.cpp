class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
            int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            int s1 = 0;
            for(int s = 0; s < i; s++) {
                s1 += nums[s];
            }
            int s2 = 0;
            for(int end = i+1; end < n; end++) {
                s2 += nums[end];
            }
            if(s1 == s2) {
                return i;
            }
        }
        return -1;
    }
};