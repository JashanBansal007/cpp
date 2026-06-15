#include<bits/stdc++.h>
using namespace std;

void f(int cur,int n,int k,int sum,vector<int> &path){
    if(sum == n){
        for(int i=0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
        return;
    }

    if(sum>n){
        return;
    }

    for(int i=1;i<=k;i++){
        path.push_back(i);
        f(cur+i,n,k,sum+i,path);    
        path.pop_back();
    }
}


int main(){
    int n,k;
    cin>>n>>k;

    vector<int> path;
    f(0,n,k,0,path);
}