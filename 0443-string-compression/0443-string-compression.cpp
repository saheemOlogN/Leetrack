class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> temp;
        int i=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            int c=0;
            while(i<n && j<n){
                if(chars[j]!=chars[i]){
                    break;
                    }
                c++;
                j++;
            }
            temp.push_back(chars[i]);
            if(c>0){
                string s=to_string(c+1);
                for(auto x:s){
                    temp.push_back(x);
                }
            }

            i=j;
        }
        chars=temp;
        return temp.size();
    }
};