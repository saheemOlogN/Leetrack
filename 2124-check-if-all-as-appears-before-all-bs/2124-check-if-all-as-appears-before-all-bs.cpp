class Solution {
public:
    bool checkString(string s) {
        int flash=-1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                flash=i; 
                break;
            }
           
        }
        if(flash == -1) return true;
        for(int i=flash;i<n;i++){
            if(s[i]=='a') return false;
        }
        return true;
    }
};