class Solution {
public:
    int longestValidParentheses(string s) {
        int res=0;
        int open=0,close=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            if(close>open){
                open=0;
                close=0;
            } else if(open==close) res=max(res,open+close);
        }
          open=0;
          close=0;

        for(int i=n-1;i>=0;i--){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            if(open>close){
                open=0;
                close=0;
            } else if(open==close) res=max(res,open+close);
        }
        return res;
    }
};