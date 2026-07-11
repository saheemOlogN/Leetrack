class Solution {
public:
bool isValid(unordered_map<char,int> avail,unordered_map<char,int> need){
    if(avail.size()!=need.size()) return false;
    for(auto x:avail){
        if(x.second!=need[x.first]) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char,int> need;
        unordered_map<char,int> avail;
        for(auto x:p) need[x]++;
        int low=0;
        for(int high=0;high<s.size();high++){
            avail[s[high]]++;
            while(high-low+1>p.size()){
                avail[s[low]]--;
                if(avail[s[low]]==0)avail.erase(s[low]);
                low++;
            }
            if(isValid(avail,need)) res.push_back(low);
        }
        return res;
    }
};