#include<bits/stdc++.h>
using namespace std;

void f(int cur,int n,vector<int>&path){
    if(cur == n){
        for(int i=0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(cur>n){
        return;
    }

    path.push_back(1);
    f(cur+1,n,path);
    path.pop_back();


    path.push_back(2);
    f(cur+2,n,path);
    path.pop_back();


}

int main(){
    int n;
    cin>>n;

    vector<int> path;
    f(0,n,path);
}