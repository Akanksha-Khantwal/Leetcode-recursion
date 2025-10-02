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

int backtrack(int row,int n, vector<string>&board,int count){
    if(row==n){
        count++;
        return count;
    }
    for(int column=0;column<n;column++){
        if(issafe(row,column,board,n)){
        board[row][column]='Q';
        count =backtrack(row+1,n,board,count);
        board[row][column]='.';
        }
    }
    return count;
}
    int totalNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        int count =0;
        return backtrack(0,n,board,count);
    
    }
};