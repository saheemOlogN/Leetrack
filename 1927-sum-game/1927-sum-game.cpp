class Solution {
public:
int leftSum(string num){
    int res=0;
    int i=0;
    int j=num.size();
    int mid=i+(j-i)/2;
    for(int i=0;i<mid;i++){
        if(num[i]!='?') res+=num[i]-'0';
    }
    return res;
}

int rightSum(string num){
    int res=0;
    int i=0;
    int j=num.size();
    int mid=i+(j-i)/2;
    for(int i=mid;i<num.size();i++){
        if(num[i]!='?') res+=num[i]-'0';
    }
    return res;
}

int leftQ(string num){
    int res=0;
    int i=0;
    int j=num.size();
    int mid=i+(j-i)/2;
    for(int i=0;i<mid;i++){
        if(num[i]=='?') res++;
    }
    return res;
}

int rightQ(string num){
    int res=0;
    int i=0;
    int j=num.size();
    int mid=i+(j-i)/2;
    for(int i=mid;i<num.size();i++){
        if(num[i]=='?') res++;
    }
    return res;
}

    bool sumGame(string num) {
        int ls=leftSum(num);
        int rs=rightSum(num);
        int lq=leftQ(num);
        int rq=rightQ(num);
        if((lq+rq)%2!=0) return true;

        int eq1 = 2*ls+9*lq;       
        int eq2 = 2*rs+9*rq;   

        if(eq1==eq2) return false;
        return true;
    }
};
