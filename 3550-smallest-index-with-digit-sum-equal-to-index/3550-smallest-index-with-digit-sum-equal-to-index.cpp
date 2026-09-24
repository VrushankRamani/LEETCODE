class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int k1= nums[i];
            int sum=0;
            while(k1>0){
                int r=k1%10;
                sum=sum+r;
                k1=k1/10;
            }
            if(sum==i){
                return i;
            }

        }
        return -1;
        
    }
};