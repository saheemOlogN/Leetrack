class Solution {
public:
    vector<string> res;
    void solve(int idx,string digits,string &temp,unordered_map<int,string> &mp){
        if(idx==digits.size()){
            res.push_back(temp);
            return;
        }
        char key=digits[idx];
        int k=key-'0';
        string a=mp[k];

        for(int i=0;i<a.size();i++){
            temp.push_back(a[i]);
            solve(idx+1,digits,temp,mp);
            temp.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        unordered_map<int,string> mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        
        string temp="";
        solve(0,digits,temp,mp);
        return res;

    }
};