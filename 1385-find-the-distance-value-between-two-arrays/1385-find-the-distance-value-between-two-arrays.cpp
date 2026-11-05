class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res=0;
        bool valid;
        for(auto &x:arr1){
            valid=true;
            for(auto &y:arr2){
                if(abs(x-y)<=d) {
                    valid=false;
                    break;
                }
            }
            if(valid) res++;
        }
        return res;
    }
};