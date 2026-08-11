class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        string res="";
        for(auto &x:s){
            if(x!='*') st.push(x);
            else{
                st.pop();
            }
        }
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());


        return res;

    }
};