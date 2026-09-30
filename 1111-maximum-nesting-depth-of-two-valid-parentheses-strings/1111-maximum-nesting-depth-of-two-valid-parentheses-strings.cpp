class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d=0;
        int n=seq.size();
        vector<int> res(n);
        
        for(int i=0;i<n;i++){
            
            if(seq[i]=='('){
                res[i]=(d%2==0)?0:1;
                d++;
            }else{
                d--;
                res[i]=(d%2==0)?0:1;
            
            }
            
        }


        return res;
    }
};