class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> res(n);
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mp;
        int rank=1;
        for(int i=0;i<temp.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=rank;
                rank++;
            }
        }

        for(int i=0;i<arr.size();i++){
            res[i]=mp[arr[i]];
        }

        return res;
    }
};