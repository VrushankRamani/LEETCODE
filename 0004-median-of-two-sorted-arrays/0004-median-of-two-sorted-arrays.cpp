class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int total=m+n;
        vector<int> ans;
        int j=0;
    
       
       for(int i=0;i<total;i++){
        if(i<m){
           ans.push_back(nums1[i]);
        }else{
              ans.push_back(nums2[j]);
              j++;
        }
      
        
       }
       sort(ans.begin(),ans.end());
       if(total%2==0){
         return (ans[total/2]+ans[(total/2)-1])/2.0;
         
       }
       return ans[total/2];
    }
};