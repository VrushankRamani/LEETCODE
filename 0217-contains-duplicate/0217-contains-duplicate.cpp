class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> frq;
        for(int i=0; i<nums.size(); i++){
            frq[nums[i]]++;
        }
        for(auto it:frq){
            if(it.second>=2){
                return true;
            }
        }
        return false;
    }
};