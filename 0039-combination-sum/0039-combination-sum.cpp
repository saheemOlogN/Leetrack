class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,vector<int>& candidates, int target,int sum,vector<int> temp){
        if(i>=candidates.size() || sum>target) return;
        if(sum==target){
            res.push_back(temp);
            return;
        }
        temp.push_back(candidates[i]);
        solve(i,candidates,target,sum+candidates[i],temp);
        temp.pop_back();
          solve(i+1,candidates,target,sum,temp);

        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        vector<int> temp;
       solve(0,candidates,target,0,temp);
       return res;
       
    }
};