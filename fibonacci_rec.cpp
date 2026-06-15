#include<bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    long long small_ans1 = f(n-1);
    long long small_ans2 = f(n-2);
    long long ans = small_ans1 + small_ans2;
    return ans;
}

int main(){
    long long n;
    cin>>n;

    long long result = f(n);
    cout<<result<<"\n";
    return 0;
}