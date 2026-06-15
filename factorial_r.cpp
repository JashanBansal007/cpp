#include<bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n==0){
        return 1;
    }

    long long small_ans = f(n-1);
    long long ans = n * small_ans;
    return ans;

}

int main(){
    int n;
    cin>>n;
    long long res = f(n);
    cout << res << '\n';
    return 0;
}