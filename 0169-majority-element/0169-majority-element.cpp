class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
          map<int,int> frq;
        for(int i=0; i<nums.size(); i++){
            frq[nums[i]]++;
        }
        for(auto it:frq){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};