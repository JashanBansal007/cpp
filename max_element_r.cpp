#include<bits/stdc++.h> 
using namespace std;

long long f(long long i, vector<long long> &arr){
    if(i == 0){
        return arr[0];
    }

    long long small_max = f(i-1, arr);
    return max(small_max, arr[i]);
}

int main(){
    int n;
    cin>>n;

    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<f(n-1,arr)<<"\n";
    return 0;
}