class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int sigmmer=*max_element(begin(candies),end(candies));
        int n=candies.size();
        vector<bool> res(n,false);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=sigmmer) res[i]=true;
        }
        return res;
    }
};