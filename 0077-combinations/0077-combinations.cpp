class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,int n,int k,vector<int> temp){
        if(temp.size() == k) {
    res.push_back(temp);
    return;
}
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            solve(j+1,n,k,temp);
            temp.pop_back();
            // solve(j+1,n,k,temp);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(1,n,k,temp);
        return res;
    }
};