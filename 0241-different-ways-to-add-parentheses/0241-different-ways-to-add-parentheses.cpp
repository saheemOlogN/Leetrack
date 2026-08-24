class Solution {
public:
vector<int> solve(string str){
    vector<int> res;
    for(int i=0;i<str.size();i++){
        if(str[i]=='+' || str[i]=='-'  || str[i]=='*'){
            vector<int> left=solve(str.substr(0,i));
            vector<int> right=solve(str.substr(i+1));

            for(auto &x:left){
                for(auto &y:right){
                    if(str[i]=='+') res.push_back(x+y);
                    else if(str[i]=='-') res.push_back(x-y);
                    else  res.push_back(x*y);
                }
            }

        }
      

    }
      if(res.empty()) res.push_back(stoi(str));
    return res;
}
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};