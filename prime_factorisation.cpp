#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    map<long long,int> freq;   

    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                freq[i]++;
                n/=i;
            }
            cout<<i<<"^"<<freq[i]<<" ";
        }
    }
    if(n>1){
        cout<<n<<"^"<<1<<" ";
    }

    return 0;
}