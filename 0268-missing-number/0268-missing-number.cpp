class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        int m=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n){
                n=n+1;
            }
            m=n;
        }
        return m;
        
    }
};