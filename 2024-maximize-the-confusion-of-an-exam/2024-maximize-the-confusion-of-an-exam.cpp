class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int low=0;
        int res=0;
        int t=0,f=0;
        for(int high=0;high<answerKey.size();high++){
            if(answerKey[high]=='T')t++;
            else f++;

            while(high-low+1 - max(t,f) >k){
                if(answerKey[low]=='T') t--;
                else f--;
                low++;

            }
            res= max(res,high-low+1);

        }


        return res;
    }
};