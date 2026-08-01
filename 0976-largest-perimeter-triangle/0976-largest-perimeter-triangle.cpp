class Solution {
public:
bool is(int a,int b,int c){
    return a+b>c;
}
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-3;i>=0;i--){
            if(is(nums[i],nums[i+1],nums[i+2])) return nums[i]+nums[i+1]+nums[i+2];
        }
        

        return 0;

    }
};