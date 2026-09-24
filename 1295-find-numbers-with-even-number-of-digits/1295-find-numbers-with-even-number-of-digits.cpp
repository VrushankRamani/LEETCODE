class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int D=0;
        for(int i=0;i<nums.size();i++){
            int k1=nums[i];
            int count=0;
            while(k1>0){
               count++;
               k1=k1/10;
            }
            if(count%2==0){
                D++;
            }
        }
        return D;
    }
};