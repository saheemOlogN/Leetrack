class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();

        vector<int> before(n);
        vector<int> after(n);
        before[0]=nums[0];
        after[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            before[i] = max(before[i-1], nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            after[i]=min(nums[i],after[i+1]);
        }
        for(int i=0;i<n;i++){
            if(before[i]-after[i]<=k) return i;
        }
        return -1;
    }
};