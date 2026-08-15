class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int res=0;
        bool ghee=true;
        int n=nums.size();
        for(auto &x:nums) {
            res^=x;
            if(x!=0) ghee=false;
        }
        if(ghee) return 0;
        if(res==0) return n-1;
        return n;
        }
};