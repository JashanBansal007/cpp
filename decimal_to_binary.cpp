#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin>>n;

    unsigned long long cur = 1ULL;

    if(n==0){
        cout<<0<<"\n";
        return 0;
    }

    while(cur<=n){
        cur*=2;

    }
    cur/=2;

    while(cur>0){
        if(cur<=n){
            cout<<'1';
            n-=cur;
        } else {
            cout<<'0';
        }
        cur/=2;
    }
    cout<<'\n';
    return 0;
}