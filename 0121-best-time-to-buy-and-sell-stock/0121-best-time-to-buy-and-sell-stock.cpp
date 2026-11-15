class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> suff(n,0);
        int res=0;
        suff[n-1]=prices[n-1];
        int temp=prices[n-1];
        for(int i=n-2;i>=0;i--){
            temp=max(temp,prices[i]);
            suff[i]=temp;
        }
        
        for(int i=0;i<n-1;i++){
            res=max(res,suff[i+1]-prices[i]);
        }
        return res;
    }
};