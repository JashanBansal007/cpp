#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    

    long long cur = 1;

    while(cur<=n){
        cur*=2;

    }
    cur/=2;

    while(n>0){
        if(cur<=n){
            cout<<cur<<" ";
            n-=cur;
        }
        cur/=2;
    }
}