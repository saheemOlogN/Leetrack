class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=1e9+7;
        int odd=0;
        int even=1;
        long long res=0;
        int n=arr.size();
        vector<int> pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        for(auto &x:pre){
            if(x%2==0){
                even++;
                res=(res+odd)%mod;
            }else{
                odd++;
                res=(res+even)%mod;
            }
        }
        return res;
    }
};