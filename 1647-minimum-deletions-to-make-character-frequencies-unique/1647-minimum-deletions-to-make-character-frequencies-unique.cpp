class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(auto &x:s) mp[x]++;
        vector<int> temp;
        for(auto &x:mp) temp.push_back(x.second);
        int res=0;
        sort(begin(temp),end(temp));
        unordered_set<int> st;
        for(auto &x:temp){
            if(st.count(x)==0) st.insert(x);
            else{
                while(st.count(x) && x > 0){
                    x--;
                    res++;
                }
                if(x>0)st.insert(x);

            }
        }
        
        return res;
    }
};