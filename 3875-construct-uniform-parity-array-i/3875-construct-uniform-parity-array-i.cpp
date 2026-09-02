class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> temp;
        vector<int> t;
        int even=0,odd=0;
        bool first=true;
        bool second=true;
        for(auto &x:nums1){
            if(x%2==0) even++;
            else odd++;
        }
        if(nums1[0]%2==0){ //even array
            temp.push_back(nums1[0]);
        }
      
        for(int i=1;i<nums1.size();i++){
            if(nums1[i]%2!=0){ //odd number
                if(odd<2) {
                    first=false;
                    break;
                }
            }else{
                odd--;
            }
        }

         if(nums1[0]%2!=0){ //odd array
            t.push_back(nums1[0]);
        }
     
        for(int i=1;i<nums1.size();i++){
            if(nums1[i]%2==0){
                if(odd<1 && even<1) second=false;
            }else{
                odd--;
                even--;
            }
        }
        return first || second;
    }
};