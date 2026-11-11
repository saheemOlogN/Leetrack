class Solution {
public:
    int partitionString(string s) {
        int res=1;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0){
                res++;
                 mp.clear();
            }
            mp[s[i]]++;
        }
        return res;
    }
};