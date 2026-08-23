class Solution {
public:
    int left_ans(vector<int>& nums, int target){
        int r=nums.size()-1;
        int l=0;
        int res=-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                res=mid;
                r=mid-1;
            }
            else if(target>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }

        return res;
        
    
    }
    int right_ans(vector<int>& nums, int target){
        int r=nums.size()-1;
        int l=0;
         int res=-1;
         while(l<=r){
          int mid = l + (r-l)/2;

            if(nums[mid]==target){
                res=mid;
                l=mid+1;
            }
            else if(target>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }

         }
                 return res;

    
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int left=left_ans(nums,target);
        int right=right_ans(nums,target);

        return {left,right};
    }
};