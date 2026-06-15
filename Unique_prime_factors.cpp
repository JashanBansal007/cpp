#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    set<long long> primeFactors;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                primeFactors.insert(i);
                n/=i;
            }
        }
       
    }
    if(n>1) primeFactors.insert(n);

    cout<<primeFactors.size();

    return 0;
}