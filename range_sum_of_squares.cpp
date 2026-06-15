#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    long long prefix[n+1];
    prefix[0] = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        prefix[i+1] = prefix[i] + (long long)arr[i]*arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        long long sum = prefix[r] - prefix[l-1];
        cout<<sum<<endl;
    }
}