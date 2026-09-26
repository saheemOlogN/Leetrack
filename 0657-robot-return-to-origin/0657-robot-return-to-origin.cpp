class Solution {
public:
    bool judgeCircle(string moves) {
    
        int ud=0;
        int lr=0;
        for(auto x:moves){
            if(x=='U') ud++;
            else if(x=='D') ud--;
            else if(x=='L') lr++;
            else lr--;
        }

        return lr==0 && ud==0;


    }
};