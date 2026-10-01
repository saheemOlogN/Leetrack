class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res="";
        for(auto &x:s){
           if(!st.empty() && st.top()==x) st.pop();
           else st.push(x);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(begin(res),end(res));
        return res;
    }
};