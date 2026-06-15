#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n==0){
        return;
    }
    cout << n << "\n";
    f(n-1);
}

int main(){
    int n;
    cin>>n;

    f(n);
    cout << "\n";

    return 0;
}