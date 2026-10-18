class Solution {
public:
typedef long long ll;
ll m=1e9+7;
vector<vector<ll>> P;
ll solve(vector<int>& nums){
    int n=nums.size();
    if(n<3) return 1;
    vector<int> left;
    vector<int> right;
    int root=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<root) left.push_back(nums[i]);
        else right.push_back(nums[i]);
    }
    ll x=solve(left);
    ll y=solve(right);
    ll z=P[n-1][left.size()];

  return (((x * y) % m) * z) % m;
}
    int numOfWays(vector<int>& nums) {
        int n=nums.size();
            P.resize(n+1);
 
        for(int i=0;i<=n;i++){
         P[i]= vector<ll> (i+1,1);
            for(int j=1;j<i;j++){
         P[i][j] = (P[i - 1][j - 1] + P[i - 1][j]) % m;
            }

        }

     return (solve(nums) - 1 + m) % m;
    }
};