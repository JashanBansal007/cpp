#include<bits/stdc++.h>
using namespace std;

long long f(int i, vector<int> &arr){
    if(i==0){
        return arr[0];
    }

    long long small_ans = f(i-1,arr);
    long long ans = arr[i] + small_ans;

    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==0){
        cout<<0<<"\n";
        return 0;
    }

    long long ans = f(n-1,arr);
    cout<<ans<<"\n";

    return 0;
}