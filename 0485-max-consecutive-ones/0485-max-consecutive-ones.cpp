class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int m1=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                k++;
                m1=max(m1,k);
            }
            else{
              k=0;
            }
               
            
        }
        return m1;
    }
};