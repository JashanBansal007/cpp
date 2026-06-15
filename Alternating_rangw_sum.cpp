#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long arr[n+1];
    long long prefix[n+1];
    prefix[0] = 0;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i%2 == 1){
            prefix[i] = prefix[i-1] + arr[i];
        }
        else{
            prefix[i] = prefix[i-1] - arr[i];
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        long long sum = prefix[r] - prefix[l-1];
        if(l%2 == 0){
            sum = -sum;
        }
        cout<<sum<<endl;
    }
    
}