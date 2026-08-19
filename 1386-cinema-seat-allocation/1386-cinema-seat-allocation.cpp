class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        unordered_map<int,unordered_set<int>> mp;
        
        for(auto &x:reservedSeats){
            int row=x[0];
            mp[row].insert(x[1]);

        }
        int res=(n-mp.size())*2;
        
        for(auto &[x,y]:mp){
            auto valid = [&](int seat){
                return y.find(seat) == y.end();

        };
            bool a = valid (2) && valid  (3) && valid(4) && valid(5);
            bool b = valid (4) && valid  (5) && valid(6) && valid(7);
            bool c = valid (6) && valid  (7) && valid(8) && valid(9);

            if(a && c) res+=2;
            else if(b || c || a) res++;

        }
        return res;
    }
};