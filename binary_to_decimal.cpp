#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans = 0, p = 1;
    if(n==0){
        cout<<0<<"\n";
        return 0;
    }
    while(n>0){
        int bit = n%10;
        if(bit!=0 && bit!=1){
            cout<<"Invalid binary input\n";
            return 0;
        }
        ans += bit*p;
        p*=2;
        n/=10;
    }

    cout<<ans<<"\n";
    return 0;
}