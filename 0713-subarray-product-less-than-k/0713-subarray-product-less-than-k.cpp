class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            int mul=1;
            for(int j=i;j<nums.size();j++){
                mul*=nums[j];
                if(mul<k){
                    count++;
                }
                else{
                    break;
                }
            }
            
        }
    return count;
    }

};