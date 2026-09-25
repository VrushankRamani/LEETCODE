class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int k=nums[0];
        int m=abs(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(m>abs(nums[i])){
              k=nums[i];

              m=abs(nums[i]);

            }
            if(m==abs(nums[i])){
                k=max(k,nums[i]);
            }
             
        }
        return k;
    }
};