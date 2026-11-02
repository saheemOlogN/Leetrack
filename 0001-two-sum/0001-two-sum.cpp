class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
       
        int i=0;
       
        for(auto &x:nums){
            int what=target-x;
            if(mp.find(what)!=mp.end()){
                return {i,mp[what]};
            }
            
            mp[x]=i;
             i++;
           
        }
        return {};
    }
};