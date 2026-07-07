class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=0;
        int n=nums.size();
        if(n==1) return 0;
        int j=1;
        for(int i=0;i<n;i++){
           while (j < n && 1LL * k * nums[i] >= nums[j]) j++;
            res=max(res,j-i);

        }

        

        return n-res;
    }
};