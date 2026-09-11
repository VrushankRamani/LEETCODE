class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());   
        vector<int> ans;
        int n = 1;                      

        for (int i = 0; i < nums.size(); i++) {
           
            while (i < nums.size()-1 && nums[i] == nums[i+1]) {
                i++;
            }

            if (nums[i] == n) {
                n++; 
            } else {
                
                while (n < nums[i]) {
                    ans.push_back(n);
                    n++;
                }
                n = nums[i] + 1;
            }
        }

        
        while (n <= nums.size()) {
            ans.push_back(n);
            n++;
        }

        return ans;
    }
};


