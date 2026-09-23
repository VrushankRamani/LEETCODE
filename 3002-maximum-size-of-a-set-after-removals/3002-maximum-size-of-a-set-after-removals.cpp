class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size()/2;
    int n2=nums2.size()/2;
    sort(nums1.begin(), nums1.end());
    nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());

    sort(nums2.begin(), nums2.end());
    nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

    vector<int> ans;
   
    for(int j=0;j<nums1.size();j++){
        
        ans.push_back(nums1[j]);
    }
    for(int j=0;j<nums2.size();j++){
        ans.push_back(nums2[j]);
    }


    sort(ans.begin(),ans.end());
    auto it1=unique(ans.begin(),ans.end());
    ans.erase(it1,ans.end());

     int max_from_nums1 = min((int)nums1.size(), n1);
     int max_from_nums2 = min((int)nums2.size(), n2);
     return min((int)ans.size(), max_from_nums1 + max_from_nums2);

  






//     unordered_set<int> unique_set(nums1.begin(), nums1.end());
//     int k1=unique_set.size();
//      unordered_set<int> unique_set1(nums2.begin(), nums2.end());
//     int k2=unique_set1.size();

//     if(k1>n1){
//         k1=n1;
//     }
//     if(k2>n2){
//         k2=n2;
//     }
//    ans.insert(unique_set.begin(),unique_set.end());
//    ans.insert(ans.end(),unique_set1.begin(),unique_set1.end());
     
//      sort(ans.begin(),ans.end());
//      auto it=unique(ans.begin(),ans.end());
//      ans.erase(it,ans.end());
    
//     return ans.size();

    
    }
};