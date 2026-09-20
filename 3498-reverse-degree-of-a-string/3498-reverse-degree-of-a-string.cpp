class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int c=26;
        for(char ch='a';ch<='z';ch++){
            mp[ch]=c;
            c--;
        }
        int res=1;
        int i=1;
        for(auto &x:s){
            int f=mp[x];
            res+= i*f;
            i++;

        }
        return res-1;
    }
};