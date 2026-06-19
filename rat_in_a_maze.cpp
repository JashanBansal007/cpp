#include<bits/stdc++.h>
using namespace std;

vector<string> result;

void f(int i,int j,int n,vector<vector<int>> &arr,vector<vector<int>> &visited,string &path){
    if(i<0 || j<0 || i>=n || j>=n){
        return;
    }

    if(arr[i][j]==0 || visited[i][j]){
        return;
    }

    if(i==n-1 && j==n-1){
        result.push_back(path);
        return;
    }

    visited[i][j] = 1;

    path.push_back('D');
    f(i+1,j,n,arr,visited,path);
    path.pop_back();

    path.push_back('L');
    f(i,j-1,n,arr,visited,path);
    path.pop_back();

    path.push_back('R');
    f(i,j+1,n,arr,visited,path);
    path.pop_back();

    path.push_back('U');
    f(i-1,j,n,arr,visited,path);
    path.pop_back();

    visited[i][j] = 0;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    vector<vector<int>> visited(n, vector<int>(n,0));
    string path = "";

    f(0,0,n,arr,visited,path);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}
