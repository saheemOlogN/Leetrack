class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n,-1);
        vector<long long> pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }

        for(int i=k;i<n-k;i++){
            long long temp = ((i - k > 0) ? pref[i + k] - pref[i - k - 1] :  pref[i + k]);

           int avg=temp/ (2*k+1);
           res[i]=avg;
        }
        //im gonna return again to solve it using sliding window pattern

        return res;
    }
};