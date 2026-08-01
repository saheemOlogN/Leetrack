class Solution {
public:


    int countValidPrefixes(string s) {
        int res=0;
        int z=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') z++;
            else o++;
             if(o==z || z+1==o || o+1==z ) {
                res++;
            }
            
        }
        return res;
    }
};