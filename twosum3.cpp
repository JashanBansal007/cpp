#include<iostream>
using namespace std;
#include<map>

int main(){
    int n;
    long long x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long,long long> count;
    long long ans = 0;
    for(int i=0;i<n;i++){
        long long req = x-arr[i];
        if(count.find(req) != count.end()){
            ans += count[req];
        }
        if(count.find(arr[i]) != count.end()){
            count[arr[i]]++;    
        }
        else{
            count[arr[i]] = 1;
        }
    }
    cout<<ans<<"\n";

    return 0;
}