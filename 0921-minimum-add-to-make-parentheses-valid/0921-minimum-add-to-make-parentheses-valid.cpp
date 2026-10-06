class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0,size=0;
        for(auto &x:s){
            if(x=='(') size++;
            else if(x==')' && size>0) size--;
            else open++;
        }
        return open+size;
    }
};