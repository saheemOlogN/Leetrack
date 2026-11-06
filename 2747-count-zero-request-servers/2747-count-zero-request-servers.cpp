class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m=logs.size();
        auto lambda=[](vector<int> &v1,vector<int> &v2){
            return v1[1]<v2[1];
        };
        sort(begin(logs),end(logs),lambda);

        int q=queries.size();
        vector<int> res(q);

        vector<pair<int,int>> index(q);
        for(int i=0;i<q;i++){
            index[i]={queries[i],i};
        }
        sort(begin(index),end(index));

        unordered_map<int,int> mp;
        int i=0,j=0;

        for(auto [time,idx]:index){
            int start=time-x;
            int end=time;

            while(j<m && logs[j][1]<=end){
                mp[logs[j][0]]++;
                j++;

            }

            while(i<m && logs[i][1]<start){
                mp[logs[i][0]]--;
                if(mp[logs[i][0]]==0) mp.erase(logs[i][0]);
                i++;
            }
            res[idx] = n-mp.size();
        }


        return res;
    }
};