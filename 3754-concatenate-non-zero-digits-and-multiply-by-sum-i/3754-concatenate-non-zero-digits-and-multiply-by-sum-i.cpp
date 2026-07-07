class Solution {
public:
    string getX(int n){
        string res="";
        while(n>0){
            char d=(n%10)+'0';
            if(d!='0') res+=d;
            n=n/10;
            }
            reverse(res.begin(),res.end());

        return res.empty()? "0":res;
    }
    int getSum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    long long sumAndMultiply(int n) {
        long long x=stoll(getX(n));
        int sum=getSum(x);
        return x*sum;

    }
};