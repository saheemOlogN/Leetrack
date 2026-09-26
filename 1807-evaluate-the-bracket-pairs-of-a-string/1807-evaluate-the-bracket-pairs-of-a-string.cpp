class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto x:knowledge){
            mp[x[0]]=x[1];
        }
        string res="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                i++;
                string temp="";
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }

                if(mp.find(temp)!=mp.end()) res+=mp[temp];
                else res+="?";
            
            }

            else{
                res+=s[i];
            }
        }
        return res;
    }
};