class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int res=0;
        int low=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=abs(s[i]- t[i]);

            while(sum>maxCost){
                sum-=abs(s[low]- t[low] );
                low++;
            }
            res=max(res,i-low+1);
        }



        return res;
    }
};