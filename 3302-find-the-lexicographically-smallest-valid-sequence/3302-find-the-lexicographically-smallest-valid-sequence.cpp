class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int> suffix(n,0);
        int i=n-1;
        int j=m-1;
        int see=0;
        while(i>=0){
            if(j>0 && word1[i]==word2[j]){
                see++;
                j--;
            }
                suffix[i]=see;
                i--;
        }

        vector<int> res;
        bool ghee=true;
        i=0;
        j=0;
        while(i<n && j<m){
            if(word1[i]==word2[j]){
                res.push_back(i);
                j++;
            }
            else if(ghee && i+1<n && suffix[i+1]>=m-j-1){
                res.push_back(i);
                j++;
                ghee=false;

            }
            i++;
        }
        
        return j == m ? res: vector<int>();
    }
};