class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=*min_element(begin(nums),end(nums));
            res+= nums[i]-temp;
        }
        return res;
    }
};