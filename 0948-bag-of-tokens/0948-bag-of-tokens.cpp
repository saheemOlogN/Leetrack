class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens),end(tokens));
        int n=tokens.size();
        int res=0;
        int j=n-1;
        int i=0;
        int maxx=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                res++;
                i++;
                maxx=max(maxx,res);
            }   else if(res>0){
                    res--;
                    power+=tokens[j];

                    j--;
                }
                 else return maxx;
        }
    
        return maxx;

    }
};