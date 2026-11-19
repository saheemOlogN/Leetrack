class Solution {
public:
    vector<vector<int>> res;
    
    void solve(int i,vector<int> &nums,vector<int> temp,int n){
        res.push_back(temp);
        for(int j=i;j<nums.size();j++){
             if(j > i && nums[j] == nums[j-1]) continue;
            temp.push_back(nums[j]);
            solve(j+1,nums,temp,n);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();  
        sort(nums.begin(), nums.end());
        
        solve(0,nums,temp,n);
       
        

        return res;
    }
};