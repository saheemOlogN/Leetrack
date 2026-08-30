class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
    
        for(auto &x:bills){
            
            if(x==10){
                if(five<1) return false;
                else {
                    ten++;
                    five--;
                }
            } 
            else if(x==20) {
                 if(ten>=1 && five>=1){
                ten--;
                five--;
               }
              else if(five>=3) five-=3;
             
               else{
                return false;
               }

            }
            else{
                five++;
            }
        }
        return true;
    }
};