class Solution {
public:

    typedef long long ll;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int mod = 1e9+7;
        vector<int> res;
        int n=s.size();

        vector<int> nonZero(n);
       nonZero[0] = (s[0] == '0') ? 0 : 1;
        for(int i=1;i<n;i++){
            if(s[i]=='0') nonZero[i]=nonZero[i-1];
            else nonZero[i]=nonZero[i-1]+1;
        }


        vector<long long> power(n+1);
        power[0]=1;
            for(int i=1;i<=n;i++){
                power[i]=power[i-1]*10 % mod;
            }
        

        vector<long long> digitSum(n);
        digitSum[0]=s[0]-'0';
        for(int i=1;i<n;i++){
            digitSum[i]=digitSum[i-1]+s[i]-'0';
        }

        vector<long long> numberUpTo(n);
        numberUpTo[0]=s[0]-'0';
        for(int i=1;i<n;i++){
            if(s[i]-'0'==0) numberUpTo[i]=numberUpTo[i-1];
             else numberUpTo[i] = (numberUpTo[i-1] * 10 + (s[i]-'0')) % mod;
        }

        int q=queries.size();
        for(int i=0;i<q;i++){
            int l = queries[i][0];
            int r = queries[i][1];

            ll sum = digitSum[r]- ((l==0)?0:digitSum[l-1]);
            int k=nonZero[r]-((l==0)?0:nonZero[l-1]);

             ll x = (numberUpTo[r]- ((l==0)?0:numberUpTo[l-1]*power[k]%mod)  + mod) % mod;

            res.push_back((x * sum) % mod);
        }



        return res;
    }
};