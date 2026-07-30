class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
        unordered_map<char,int> mp;
        int curr=0;
        for(int i=0;i<word.size();i++){
            if(curr==8) curr=0;
            mp[curr]++;
            res+=mp[curr];
            curr++;
        }

        return res;
    }
};