class Solution {
public:
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
    int maxVowels(string s, int k) {
        int res=0;
        int low=0;
        unordered_map<char,int> mp;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            while(high-low+1>k){
                mp[s[low]]--;
                if(mp[s[low]]==0) mp.erase(s[low]);
                low++;
            }
            int temp=0;
            for(auto &x:mp) if(isVowel(x.first))temp+=x.second;
            res=max(res,temp);
        }
        return res;
    }
};