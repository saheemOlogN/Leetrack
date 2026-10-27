class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res;
        res.push_back(string(n, '.'));

        for(int i=1;i<m;i++){
            string temp(n,'#');
            temp[n-1]='.';
            res.push_back(temp);
        }



        return res;
    }
};