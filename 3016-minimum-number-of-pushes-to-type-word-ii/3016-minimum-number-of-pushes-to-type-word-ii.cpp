class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
        vector<int> freq(26,0);
        for(auto &x:word) freq[x-'a']++;
        sort(freq.rbegin(),freq.rend());
        int i=0;
        for(auto &x:freq){
            int place = i/8+1;
            int total = place*x;
            i++;
            res+=total;
        }


        return res;
    }
};