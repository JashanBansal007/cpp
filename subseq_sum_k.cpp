#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void f(int i,int n,int k,int sum,vector<int> &arr,vector<int> &path){
    if(i==n){
        if(sum==k){
            result.push_back(path);
        }
        return;
    }

    path.push_back(arr[i]);
    f(i+1,n,k,sum+arr[i],arr,path);
    path.pop_back();

    f(i+1,n,k,sum,arr,path);
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> path;
    f(0,n,k,0,arr,path);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            if(j>0) cout<<" ";
            cout<<result[i][j];
        }
        cout<<"\n";
    }
}