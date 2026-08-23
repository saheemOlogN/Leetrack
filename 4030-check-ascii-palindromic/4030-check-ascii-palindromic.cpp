class Solution {
public:
bool is(string &res){
    if(res.size()==1) return true;
    int i=0;
    int n=res.size();
    while(i<n){
        if(res[i]!=res[n-1]) return false;
       i++;
       n--;

    }
    return true;
}
    bool isPalindromic(string s) {
        string res="";
        for(auto &x:s){
            
            for(int i=7;i>=0;i--){
            if(x & (1<<i)) res.push_back('1');
            else res.push_back('0');
            }
        }
        return is(res);
    }
};