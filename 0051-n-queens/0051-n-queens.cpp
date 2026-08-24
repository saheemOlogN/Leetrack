class Solution {
public:
vector<vector<string>> res;
bool ghee(vector<string> &board,int row,int col){
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q') return false;
    }
   
    int i=row-1;
    int j=col-1;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q') return false;
        i--;
        j--;

    }
    i=row-1;
    j=col+1;
    while(i>=0 && j<board.size()){
        if(board[i][j]=='Q') return false;
        i--;
        j++;

    }


    return true;

}
void solve( int n,vector<string> &board,int row){
    if(row>=n){
        res.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
            if(ghee(board,row,col)){
            board[row][col]='Q';
            solve(n,board,row+1);
             board[row][col]='.';
            }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(n,board,0);
        return res;
    }
};