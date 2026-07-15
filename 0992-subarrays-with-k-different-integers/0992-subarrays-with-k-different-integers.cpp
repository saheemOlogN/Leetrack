class Solution {
public:
int solve(vector<int> nums,int k){
      int res=0;
        int low=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[low]]--;
                if(mp[nums[low]]==0)mp.erase(nums[low]);
                low++;
            }
         
            res+=(i-low+1);
        }


        return res;
}
   
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return solve(nums,k)-solve(nums,k-1);
    }
};