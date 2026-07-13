class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res=0;
        int low=0;
        unordered_map<int,int> mp;
        for(int high=0;high<nums.size();high++){
            mp[nums[high]]++;

            while(mp[0]>1){
                mp[nums[low]]--;
                if(mp[nums[low]]==0) mp.erase(nums[low]);
                low++;
            }
            res=max(res,high-low);

        }



        return res;
    }
};