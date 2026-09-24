class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i=0;i<arr.size()-1;i++){
        int m1=arr[i+1];
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>m1){
                m1=arr[j];
            }
            
        }
        arr[i]=m1;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};