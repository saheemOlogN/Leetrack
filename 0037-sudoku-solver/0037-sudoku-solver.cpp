class Solution {
public:

    bool valid(vector<vector<char>>& board,int row, int col,int d){
        for(int i=0;i<9;i++){
            if(board[row][i]==d) return false;
            if(board[i][col]==d) return false;
        }
        int one= row/3 *3;
        int two= col/3 *3;
        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++){
                if(board[one+k][two+l]==d) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board){

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j] != '.') continue;
                for(int d='1';d<='9';d++){
                if(valid(board,i,j,d)){
                     board[i][j]=d;
                if(solve(board)) return true;
                board[i][j]='.';
                }

                }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};