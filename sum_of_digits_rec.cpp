#include<bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n==0){
        return 0;
    }
    long long small_ans = f(n/10);
    long long ans = n%10 + small_ans;
    return ans;
}

int main(){
    long long n;
    cin>>n;

    long long result = f(n);
    cout<<result<<"\n";

    return 0;
}