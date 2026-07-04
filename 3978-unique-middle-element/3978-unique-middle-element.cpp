class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums) mp[x]++;
        int mid = 0 + (nums.size()-1) /2;
        if(mp[nums[mid]]==1) return true;
        return false;
    }
};