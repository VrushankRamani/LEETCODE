class Solution {
public:
    long long countCommas(long long n) {
        if(n<999){
            return 0;
        }
        long long ans =n-999;
        if(n>999999){
            ans+=n-999999;
        }
        if(n>999999999){
            ans+=n-999999999;
        }
        if(n>999999999999){
            ans+=n-999999999999;
        }
        if(n>999999999999999){
            ans+=n-999999999999999;
        }

        return ans;


        
    }
};