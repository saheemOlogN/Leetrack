class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=*max_element(begin(nums),end(nums));
        int idx=max_element(begin(nums),end(nums))- nums.begin();;
        for(int i=0;i<nums.size();i++){
            if(i==idx) continue;
            if(nums[i]>largest/2) return -1;
        }

        return idx;
    }
};