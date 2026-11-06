class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res=0;
        int low=0;
        int n=cardPoints.size();
        int total=accumulate(begin(cardPoints),end(cardPoints),0);

        if (k == n) return total;
        int window = 0;
        int mini = INT_MAX;
        int sz = n - k;

        for(int i=0;i<n;i++){
            window+=cardPoints[i];

            if(i>=sz-1){
                mini=min(mini,window);
            window -= cardPoints[low];
            low++;
            }
        }

        

        return total-mini;
    }
};