class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int m=word1.size();
        int n=word2.size();
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(k%2==0){
                res.push_back(word1[i]);
                i++;
            }
            else{
                res.push_back(word2[j]);
                j++;
            }
            k++;

        }
        while(i<m){
           res.push_back(word1[i]);
                i++;
        }
        while(j<n){
           res.push_back(word2[j]);
                j++;
        }
        return res;
    }
};