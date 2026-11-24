class Solution {
public:
    int maxLength(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           long long prod = 1;
        
            long long g = 0;
            long long l = 1;
            for(int j=i;j<n;j++){
                if(prod>25200) break;
                prod*=nums[j];
                g=gcd(g,(long long)nums[j]);
                l=lcm(l,(long long)nums[j]);
                if(prod==l*g) res = max(res,j-i+1);
            }
        }
        return res;
    }
};