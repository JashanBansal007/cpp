#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    bool isPrime[n+1];
    for(long long i=0;i<=n;i++) isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;
    long long cnt = 0;

    for(long long i=2;i<=n;i++){
        if(isPrime[i] == true){
            for(long long j=i*i;j<=n;j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(long long i=2;i<=n;i++){
        if(isPrime[i]) {
            cout<<i<<' ';
            cnt++;
        }
    }
    cout<<"\n"<<cnt;
}