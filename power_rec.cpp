#include<bits/stdc++.h>
using namespace std;

long long f(long long x,long long n){
    if(n==0){
        return 1;
    }

    long long small_ans = f(x,n-1);
    long long ans = x*small_ans;
    return ans;
}

int main(){
    int x,n;
    cin>>x>>n;

    long long res = f(x,n);
    cout << res << '\n';
    return 0;
}