class Solution {
public:
    int m,n;
    vector<vector<int>> directions={{0,1},{1,0},{0,-1},{-1,0}};
    long long DFS(vector<vector<int>>& grid,int i,int j){
        long long sum=grid[i][j];
        grid[i][j]=0;

        for(auto &x:directions){
           int new_i=i+x[0];
        int new_j=j+x[1];

            if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && grid[new_i][new_j]>0) sum+=DFS(grid,new_i,new_j);
        }
    
        return sum;

    } 
    int countIslands(vector<vector<int>>& grid, int k) {
        int res=0;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0){
                    long long sum=DFS(grid,i,j);
                    if(sum%k==0) res++;
                }
            }
        }
        return res;
    }
};