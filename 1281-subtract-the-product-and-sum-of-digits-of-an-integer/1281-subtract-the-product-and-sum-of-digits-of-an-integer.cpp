class Solution {
public:
int product(int n){
    int res=1;
    while(n>0){
        res*=n%10;
        n/=10;
    }
    return res;

}
int sum(int n){
      int res=0;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return res;

}
    int subtractProductAndSum(int n) {
    return product(n)-sum(n);    
    }
};