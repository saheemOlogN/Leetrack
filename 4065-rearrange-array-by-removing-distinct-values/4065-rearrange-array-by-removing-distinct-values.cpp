class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        map<int,int> mp;
        for(auto &x:nums) mp[x]++;
        while(res.size()!=nums.size()){
        for(auto &x:mp){
            int count = x.second;
            if(count>0) {
                res.push_back(x.first);
                x.second--;
            }
        }
        }
        return res;
    }
};