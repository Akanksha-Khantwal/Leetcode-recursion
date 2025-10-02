class Solution {
public:
bool issafe(int row,int column, vector<string>&board,int n){
    for(int i=0;i<row;i++){
        if (board[i][column]=='Q') return false;
    }
    for(int i=row-1,j=column-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q')return false;
    }
    for(int i=row-1,j=column+1; i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q')return false;
    }

    return true;
}

void backtrack(int row,int n, vector<string>&board,vector<vector<string>>&result){
    if(row==n){
        result.push_back(board);
        return;
    }
    for(int column=0;column<n;column++){
        if(issafe(row,column,board,n)){
        board[row][column]='Q';
        backtrack(row+1,n,board,result);
        board[row][column]='.';
        }
    }
}
    vector<vector<string>>solveNQueens(int n) {
        vector<vector<string>>result;
        vector<string>board(n,string(n,'.'));
        backtrack(0,n,board,result);
        return result;
    }
};