class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in=true;
        bool de=true;

        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]>nums[i+1]) in=false;
            if(nums[i]<nums[i+1]) de=false;
            i++;
        }

        return in || de;

    }
};