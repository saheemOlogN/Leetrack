class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int num=nums[0];
        int n=nums.size();
        int i=0;
        while(num<=nums[n-1]){
            if(i<n && nums[i]==num){
                i++;
            }else{
                res.push_back(num);
            }
            num++;
            

        }
        return res;
    }
};