#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    for(int i=0;i<=64;i++){
        if((1LL<<i)>n){
            break;
        }
        cout<<(1LL<<i)<<" ";
    }
    cout<<"\n";
    return 0;
}