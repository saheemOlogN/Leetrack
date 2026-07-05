class Solution {
public:
int getDigitRange(int num){
   
    int mx=INT_MIN;
    int mn=INT_MAX;

    while(num!=0){
        int d=num%10;
        mx=max(mx,d);
        mn=min(mn,d);
        num=num/10;
    }



    return mx-mn;
}
    int maxDigitRange(vector<int>& nums) {
        vector<pair<int,int>> temp;

        for(auto x:nums){
          temp.push_back({x, getDigitRange(x)});
        }
        int res=0;
        int val=INT_MIN;
        for(auto x:temp){
            val=max(val,x.second);
        }
        for(auto x:temp){
            if(x.second==val) res+=x.first;
        }

        return res;
    }
};