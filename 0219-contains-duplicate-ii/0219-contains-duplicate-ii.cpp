class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int low=0;
        unordered_map<int,int> mp;
        for(int high=0;high<nums.size();high++){
            mp[nums[high]]++;

            while(mp[nums[high]]>1){
                if(abs(high-low)<=k) return true;

                mp[nums[low]]--;
                if(mp[nums[low]]==0) mp.erase(nums[low]);
                low++;
            }
          
        }
        return false;
    }
};