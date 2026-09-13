class Solution {
public:

    int count(vector<vector<int>>& img1, vector<vector<int>>& img2,int n,int row,int col){
        int res=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                int new_i= i+row;
                int new_j= j+col;

                if(new_i<0 || new_i>=n || new_j<0 || new_j>=n ) continue;
                if(img1[i][j]==1 && img2[new_i][new_j]) res++;

            }
        }
        return res;

    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int res=0;
        int n=img1.size();

        for(int i=-n+1;i<n;i++){
            for(int j=-n+1;j<n;j++){
                res=max(res,count(img1,img2,n,i,j));
            }
        }


        return res;
    }
};