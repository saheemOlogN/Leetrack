class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int res=0;
        
        int n=nums.size();
        vector<int> right(n,0);
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }
        int i=0;
        int j=0;
        while(j<n){
            while(nums[i]>right[j])i++;

            res=max(res,j-i);
            j++;
        }

 


        return res;
    }
};