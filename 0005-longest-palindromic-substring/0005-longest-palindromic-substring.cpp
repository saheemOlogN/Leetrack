class Solution {
public:
    int dp[1001][1001];
    bool solve(string &s,int i,int j){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=j) return true;
        if(s[i]!=s[j]) return false;
        else return solve(s,i+1,j-1);
        return dp[i][j]=true;
    }
    string longestPalindrome(string s) {
        memset(dp,-1,sizeof(dp));
        int maxx=0;
        int sp=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(solve(s,i,j)){
                    if(j-i+1>maxx){
                        maxx=j-i+1;
                        sp=i;
                    }
                }
            }
        }

        return s.substr(sp,maxx);
    }
};