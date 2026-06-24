#include<bits/stdc++.h>
using namespace std;

bool canPlace(int row,int col,int val,vector<vector<int>> &board){
    for(int j=0;j<9;j++){
        if(board[row][j]==val){
            return false;
        }
    }

    for(int i=0;i<9;i++){
        if(board[i][col]==val){
            return false;
        }
    }

    int startRow = (row/3)*3;
    int startCol = (col/3)*3;

    for(int i=startRow;i<startRow+3;i++){
        for(int j=startCol;j<startCol+3;j++){
            if(board[i][j]==val){
                return false;
            }
        }
    }

    return true;
}

bool solve(int row,int col,vector<vector<int>> &board){
    if(row==9){
        return true;
    }

    if(col==9){
        return solve(row+1,0,board);
    }

    if(board[row][col]!=0){
        return solve(row,col+1,board);
    }

    for(int val=1;val<=9;val++){
        if(canPlace(row,col,val,board)){
            board[row][col] = val;

            if(solve(row,col+1,board)){
                return true;
            }

            board[row][col] = 0;
        }
    }

    return false;
}

int main(){
    vector<vector<int>> board(9,vector<int>(9));

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char c;
            cin>>c;

            if(c=='.'){
                board[i][j] = 0;
            }
            else{
                board[i][j] = c-'0';
            }
        }
    }

    solve(0,0,board);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j];
        }
        cout<<"\n";
    }
}
