#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> result;

bool canPlace(int row,int col,int n,vector<string> &board){
    for(int i=row-1;i>=0;i--){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void f(int row,int n,vector<string> &board){
    if(row==n){
        result.push_back(board);
        return;
    }

    for(int col=0;col<n;col++){
        if(canPlace(row,col,n,board)){
            board[row][col] = 'Q';
            f(row+1,n,board);
            board[row][col] = '.';
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<string> board(n,string(n,'.'));
    f(0,n,board);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<"\n";
        }
        if(i+1<result.size()){
            cout<<"\n";
        }
    }
}
