#include<bits/stdc++.h>
using namespace std;

void f(int i,int n,vector<int> &arr,vector<int> &path){
    if(i==n){
        for(int k=0;k<path.size();k++){
            cout<<path[k]<<" ";
        }
        cout<<"\n";
        return;
    }

    path.push_back(arr[i]);
    f(i+1,n,arr,path);
    path.pop_back();

    f(i+1,n,arr,path);
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> path;
    f(0,n,arr,path);
}