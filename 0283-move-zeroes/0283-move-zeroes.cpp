class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=i+1;
        int n=nums.size();
        while(i<n){
            while(i<n && nums[i]!=0) i++;
            if(i>=n) break;
            if(j<=i) j=i+1;
            while(j<n && nums[j]==0) j++;
            if(j<n) swap(nums[i],nums[j]);
            i++;
        }
    }
};