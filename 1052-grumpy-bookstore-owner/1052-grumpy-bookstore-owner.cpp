class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int alr=0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0) alr+=customers[i];
        }
        int best=0;
        int extra=0;
        int low=0;

        for(int high=0;high<grumpy.size();high++){
            if(grumpy[high]==1) extra+=customers[high];
            while(high-low+1>minutes){
                if(grumpy[low]==1) extra-=customers[low];
                low++;
             
            }
            best=max(best,extra);

        }



        return alr+best;
    }
};