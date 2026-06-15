#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    long long cnt = 0;
    
    int left = 0;
    long long sum = 0;

    for(int right = 0;right<n;right++){
        sum += arr[right];
        while(sum>=k && left <= right){
            sum -= arr[left];
            left++;
        }
        cnt += (right - left + 1);
    }
    cout<<cnt<<"\n";

    return 0;
}