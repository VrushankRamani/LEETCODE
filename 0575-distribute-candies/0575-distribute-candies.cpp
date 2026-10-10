class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count=1;
        sort(candyType.begin(),candyType.end());
        for(int i=1;i<candyType.size();i++){
            if(candyType[i-1]!=candyType[i]){
                count++;
            }
        }
        return  min(count, (int)candyType.size() / 2);}
};