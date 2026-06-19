#include<bits/stdc++.h>
using namespace std;

vector<string> result;

void f(int open,int close,int n,string &path){
    if(path.size()==2*n){
        result.push_back(path);
        return;
    }

    if(open<n){
        path.push_back('(');
        f(open+1,close,n,path);
        path.pop_back();
    }


    if(close<open){
        path.push_back(')');
        f(open,close+1,n,path);
        path.pop_back();
    }

}

int main(){
    int n;
    cin>>n;

    string path = "";
    f(0,0,n,path);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}
