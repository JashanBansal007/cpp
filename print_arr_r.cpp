#include<bits/stdc++.h>
using namespace std;

void f(long long n,long long arr[]){
    if(n<0){
        return;
    }
    
    f(n-1,arr);
    cout<<arr[n]<<" ";

}

int main(){
    long long n;
    cin>>n;

    long long arr[n];
    for(long long i=0;i<=n;i++){
        cin>>arr[i];
    }

    f(n-1,arr);

    return 0;
}