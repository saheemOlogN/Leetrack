class Solution {
public:
    vector<vector<string>> res;
    bool is(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    void solve(int idx,string &s,vector<string> curr){
        if(idx>=s.size()) {
            res.push_back(curr);
            return;
        }

        for(int i=idx;i<s.size();i++){

            if(is(s,idx,i)){
                curr.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,curr);
                curr.pop_back();
            }
        }


    }
    vector<vector<string>> partition(string s) {
        res.clear();
        vector<string> curr;
        solve(0,s,curr);
        return res;
    }
};