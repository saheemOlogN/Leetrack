class Solution {
public:
bool isValid(int n,int m){
    return n==m;
}
    int longestBalanced(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int> odd;
            unordered_map<int,int> even;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0) even[nums[j]]++;
                else odd[nums[j]]++;

                if(isValid(odd.size(),even.size())){
                             res=max(res,j-i+1);
                }

            }
        }
        return res;
    }
};