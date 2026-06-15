#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int mask = 1;

    if(n & mask){
        cout<<"Odd\n";
    } else {
        cout<<"Even\n";
    }
}