class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int key=-1;

        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                key=i-1;
                break;
            }
        }
        if(key!=-1){
            int swap_index=key;

            for(int j=n-1;j>=key+1;j--){
                if(nums[j]>nums[key]){
                    swap_index=j;
                    break;
                }
            }
            swap(nums[key],nums[swap_index]);
        }
        reverse(begin(nums)+key+1,end(nums));
    }
};