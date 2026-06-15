#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        bool isPrime[r+1];
        for(int i=0;i<=r;i++) isPrime[i] = true;
        isPrime[0] = isPrime[1] = false;
        
        for(int i=2;i*i<=r;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=r;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        
        int cnt = 0;
        for(int i=l;i<=r;i++){
            if(isPrime[i]) cnt++;
        }
        cout<<cnt<<"\n";
    }
    
}