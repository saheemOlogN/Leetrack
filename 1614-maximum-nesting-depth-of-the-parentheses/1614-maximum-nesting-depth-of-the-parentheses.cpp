class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int temp=0;
        for(auto &x:s){
            if(x=='('){
                temp++;
                res=max(res,temp);
            }else if(x==')'){
                temp--;
            }
        }
        return res;
    }
};