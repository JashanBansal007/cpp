#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n+1];
    long long prefix[n+1];
    prefix[0] = 0;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        long long sum = prefix[r] - prefix[l-1];
        cout<<sum<<endl;
    }

    return 0;
}