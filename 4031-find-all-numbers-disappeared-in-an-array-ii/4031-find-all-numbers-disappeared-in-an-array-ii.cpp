class Solution {
public:
bool is(int i,int j,vector<int> &nums, int target){
    
    if(i > j) return false;
    int mid = i + (j - i) / 2;
    if(nums[mid]==target) return true;
    if(nums[mid]>target) return is(i,mid-1,nums,target);
    else return is(mid+1,j,nums,target);

}
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> res;
        sort(begin(nums),end(nums));
        vector<int> range;
        for(int i=lower;i<=upper;i++) range.push_back(i);
        int start=range[0];
        int n=nums.size()-1;
        for(int i=0;i<range.size();i++){
            while(i<range.size()){
                if (!is(0,n,nums,range[i])){
                i++;

                continue;
                }
                 if(start<=range[i]-1) res.push_back({start,range[i]-1});
                 start=range[i]+1;
                 i++;
            }
           
                if(start<=upper) res.push_back({start,upper});
               
            

           
            

        }


        return res;

    }
};