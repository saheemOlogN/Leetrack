class Solution {
public:
bool isValid(unordered_map<char,int> &mp){
    if(mp.empty()) return true;
    int temp = mp.begin()->second;

    for(auto &x:mp){
        if(x.second!=temp) return false;
    }
    return true;
}
    int longestBalanced(string s) {
       
        int i=0,j=0;
        int n=s.size();
        int res=0;
        for(int i=0;i<s.size();i++){
             unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                if(isValid(mp)) res=max(res,j-i+1);
                
            }
        }
        return res;

    }
};