class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int f=0,ten=0,t=0,k=5;
      for(int i=0;i<bills.size();i++){
        
            if(bills[i]==10){
                ten=ten+1;
                if(f==0){
                    return false;
                }
                else{
                    f--;
                }
            }
            else if(bills[i]==20){
                t=t+1;
                if(ten>=1 && f>=1){
                   f--;
                   ten--;
                }
                else if (ten==0 && f>=3){
                    f=f-3;
                }
                else{
                    return false;
                }
            }
           else{
                f=f+1;
            }
            
        
        
      } 
      return true; 
    }
};