class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<int> left(n);
        vector<int> right(n);
        for(int i=0;i<n;i++){
            if(dominoes[i]=='R') left[i]=i;
            else if(dominoes[i]=='.' ){
                if(i>0) left[i]=left[i-1];
                else left[i]=-1;
            }
            else left[i]=-1;
        }

        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='L') right[i]=i;
            else if(dominoes[i]=='.'){
                if(i<n-1) right[i]=right[i+1];
                else right[i]=-1;
            }
            else right[i]=-1;
        }
        string res="";
        for(int i=0;i<n;i++){
            int d1=abs(i-left[i]);
            int d2=abs(i-right[i]);

            if(left[i]==right[i]) res+=".";
            else if(right[i]==-1) res+="R";
            else if(left[i]==-1) res+="L";
            else if(d1==d2) res+=".";
            else {
                res += (d1<d2 ? 'R' : 'L');
            }
        }
      
        return res;
    }
};