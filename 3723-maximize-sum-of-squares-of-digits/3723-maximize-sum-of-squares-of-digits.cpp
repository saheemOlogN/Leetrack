class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
        string res="";
        int nines=sum/9;
        for(int i=0;i<nines;i++) res+='9';
     if(res.size()<num && sum%9>0) res+=('0'+sum%9);
        for(int i=res.size();i<num;i++) res+='0';
        return res;
    }
};