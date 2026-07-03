class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> mp;
        int it=0;
        for(auto x:s){
            mp[x]=it;
            it++;
        }
        int i=0;
         int j=mp[s[i]];
         int start=0;
        while(i<s.size()){
             j=max(j,mp[s[i]]);
            if(i==j) {
                res.push_back(j-start+1);
                start=j+1;
                }
            i++;


        }
        return res;
    }
};