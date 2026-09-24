class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
          map<int,int> frq;
        for(int i=0; i<arr.size(); i++){
            frq[arr[i]]++;
        }
        for(auto it:frq){
            if(it.second>n/4){
                return it.first;
            }
        }
        return -1;
    }
};