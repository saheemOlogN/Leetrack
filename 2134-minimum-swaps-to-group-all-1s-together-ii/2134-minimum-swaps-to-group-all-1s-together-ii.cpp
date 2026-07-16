class Solution {
public:
    int minSwaps(vector<int>& nums) {
       int res=0;
       int maxOnes=0;
       for(auto x:nums) if(x==1) maxOnes++;
       int low=0;
        int current=0;
        int n=nums.size();
       for(int i=0;i<2*nums.size();i++){
        if(nums[i%n]==1) current++;
        while(i-low+1>maxOnes){
            if(nums[low%n]==1) current--;
            low++;
        }
        res=max(res,current);
       
       }
       return maxOnes-res; 
    }
};