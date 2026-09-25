class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int j=0;
            int count =0;
            while(j<nums.size()  ){
                if(nums[i]>nums[j] && i!=j){
                    count ++;
                }
                j++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};