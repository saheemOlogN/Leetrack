class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
        int i=0,j=0;
        while(i<n && j<m){
            while(j<m && t[j]!=s[i]) j++;
            if(j==m) break;
            i++;
            j++;
        }
        return i==n;
    }
};