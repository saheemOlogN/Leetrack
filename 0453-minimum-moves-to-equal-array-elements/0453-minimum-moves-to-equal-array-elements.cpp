class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        int temp=*min_element(begin(nums),end(nums));
        for(int i=0;i<n;i++){
            
            res+= nums[i]-temp;
        }
        return res;
    }
};