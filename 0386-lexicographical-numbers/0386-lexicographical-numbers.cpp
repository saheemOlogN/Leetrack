class Solution {
public:
void solve(int i,int n,vector<int> &res){
    if(i>n) return;
    res.push_back(i);
    for(int a=0;a<=9;a++){
        int temp=i*10+a;
        if(temp>n) return;

        solve(temp,n,res);
    }
}
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=9;i++){
            solve(i,n,res);
        }
        return res;

    }
};