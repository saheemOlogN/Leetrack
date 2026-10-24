class Solution {
public:
    int solve(string s,vector<int> &pre){
        int month=stoi(s.substr(0,2));
        int days=stoi(s.substr(3));

        return pre[month-1]+days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> pre(13,0);
        pre[1]=31;
        for(int i=2;i<=12;i++){
            pre[i]=pre[i-1]+days[i-1];
        }

        int ad=solve(arriveAlice,pre);
        int al=solve(leaveAlice,pre);
        int bd=solve(arriveBob,pre);
        int bl=solve(leaveBob,pre);
        int x=max(ad,bd);
        int y=min(al,bl);
        return y-x+1<0?0:y-x+1;
    }
};