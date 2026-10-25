class Solution {
public:
set<vector<int>> res;
    void solve(vector<int> &nums,vector<int> &temp,int i,int n){
       if (i == n) {
            if (temp.size() >= 2) {
                res.insert(temp);
            }
            return;
        }
        
 if (temp.empty() || nums[i] >= temp.back()){
        temp.push_back(nums[i]);
        solve(nums,temp,i+1,n);
        temp.pop_back();
 }
         solve(nums,temp,i+1,n);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        solve(nums,temp,0,n);
        return vector<vector<int>>(res.begin(), res.end());
    }
};