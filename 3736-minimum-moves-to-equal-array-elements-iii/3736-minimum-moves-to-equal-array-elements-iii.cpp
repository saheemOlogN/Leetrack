class Solution {
public:
    int minMoves(vector<int>& nums) {
        int target=*max_element(begin(nums),end(nums));
        int res=0;
        for(auto &x:nums) res+=target-x;
        return res;
    }
};