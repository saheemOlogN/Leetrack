class Solution {
public:
    int maximum69Number (int num) {
        string temp=to_string(num);
        bool power=true;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='6') {
                if(power){
                    temp[i]='9';
                    power=false;
                    break;
                }
            }
        }
        int res=stoi(temp);
        return res;
    }
};