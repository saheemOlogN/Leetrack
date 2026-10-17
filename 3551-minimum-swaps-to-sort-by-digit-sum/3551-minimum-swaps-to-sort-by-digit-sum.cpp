class Solution {
public:
    int get(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(nums);
        auto lambda = [&](int a,int b){
            int x=get(a);
            int y=get(b);
            if(x!=y) return x<y;
            return a<b;

        };
        sort(begin(temp),end(temp),lambda);
        int res=0;
        unordered_map<int,int> mp;
        int i=0;
        for(auto &x:nums){
            mp[x]=i;
            i++;
        }
        for(int i=0;i<n;i++){
            int ex=temp[i];
            int act=nums[i];
            if(ex!=act){
                res++;
                int idx=mp[ex];

                nums[i]=ex;
                nums[idx]=act;
                mp[ex]=i;
                mp[act]=idx;
            }
        }




        return res;


    }
};