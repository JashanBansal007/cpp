#include<bits/stdc++.h>
using namespace std;

void f(int n,int m,int i,int j,vector<char> &path){
    if(i==n-1 && j==m-1){
        for(int k=0;k<path.size();k++){
            cout<<path[k];
        }
        cout<<"\n";
        return;
    }

    if(i>=n || j>=m){
        return;
    }

    path.push_back('R');
    f(n,m,i,j+1,path);
    path.pop_back();

    path.push_back('D');
    f(n,m,i+1,j,path);
    path.pop_back();
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<char> path;
    f(n,m,0,0,path);
}