class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> one;
        unordered_map<char,char> two;
        for(int i=0;i<s.size();i++){
            char x=s[i];
            char y=t[i];
            if(one.find(x)!=one.end() && one[x]!=y) return false;
            if(two.find(y)!=one.end() && two[y]!=x) return false;
            one[x]=y;
            two[y]=x;
                 }
        return true;
    }
};