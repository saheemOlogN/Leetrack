class Solution {
public:
int find(vector<int> &nums,int n){
    int l=0,r=n-1;
   
    while(l<r){
         int mid=l+(r-l)/2;
        if(nums[mid]>nums[r]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    return r;
}

    int bin(int l,int r,vector<int> &nums,int n,int target){
       
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>target){
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                return mid;
            }

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot = find(nums,n);
        int idx=bin(0,pivot,nums,n,target);
        if(idx==-1) idx=bin(pivot,n-1,nums,n,target);
        return idx;
    }
};