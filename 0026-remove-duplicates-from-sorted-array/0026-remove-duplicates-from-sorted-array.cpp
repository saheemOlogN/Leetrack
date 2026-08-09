class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=i+1;
        int n = nums.size();
        while(j<n){
            while(j<n && nums[i]==nums[j]) j++;
            if(j<n){
            nums[i+1]=nums[j];
            j++;
            i++;
            }

        }
        return i+1;
    }
};