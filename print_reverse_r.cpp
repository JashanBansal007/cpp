#include<bits/stdc++.h>
using namespace std;

void f(long long n){
    if(n==0){
        return;
    }
    cout<<n%10;
    f(n/10);
}

int main(){
    long long n;
    cin>>n;

    if(n==0){
        cout<<0<<"\n";
        return 0;
    }

    f(n);
    cout<<"\n";

    return 0;
}