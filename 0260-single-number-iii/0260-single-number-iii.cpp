class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(auto x:nums)mp[x]++;
        for(auto x:mp){
            if(x.second==1) res.push_back(x.first);
        }
        return res;
    }
};