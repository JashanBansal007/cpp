#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }

    long long and_result = arr[0];
    long long or_result = 0;
    long long xor_result = 0;

    for(int i=0;i<n;i++){
        and_result &= arr[i];
        or_result |= arr[i];
        xor_result ^= arr[i];
    }

    cout << and_result << " " << or_result << " " << xor_result << "\n";

    return 0;
}