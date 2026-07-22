class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        vector<int> inactive;
        int res=0;
        int current=count(s.begin(),s.end(),'1');
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                int temp=i;
                while(i<n && s[i]=='0') i++;
                inactive.push_back(i-temp);
            }
            else{
                i++;
            }
        }
        for(int i=1;i<inactive.size();i++){
            res=max(res,inactive[i]+inactive[i-1]);
        }


        return res+current;
    }
};