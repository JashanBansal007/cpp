#include<bits/stdc++.h>
using namespace std;

bool possible(const vector<long long> &a,long long n,long long time,long long k){
    long long painter = 1;
    long long timeTaken = 0;

    for(long long i=0;i<n;i++){
        if(timeTaken + a[i] <= time){
            timeTaken += a[i];
        }
        else{
            painter++;
            timeTaken = a[i];
        }
    }
    return painter <= k;
}

int main(){
    long long n,k;
    cin>>n>>k;

    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

    

    long long ans = 0;
    long long l = *max_element(a.begin(), a.end());
    long long r = accumulate(a.begin(), a.end(), 0LL);

    while(l<=r){
        long long mid = l + (r-l)/2;
        if(possible(a,n,mid,k)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
}