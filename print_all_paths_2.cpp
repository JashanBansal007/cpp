#include<bits/stdc++.h>
using namespace std;

int a[12][12];

void f(int i,int j,int n,int m,vector<char> &path){
    if(i>n || j>m){
        return;
    }

    if(a[i][j]==1){
        return;
    }

    if(i==n && j==m){
        for(int k=0;k<path.size();k++){
            cout<<path[k];
        }
        cout<<"\n";
        return;
    }

    path.push_back('R');
    f(i,j+1,n,m,path);
    path.pop_back();

    path.push_back('D');
    f(i+1,j,n,m,path);
    path.pop_back();
}


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    vector<char> path;

    f(1,1,n,m,path);
}