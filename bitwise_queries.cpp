#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; int q;
    cin >> n >> q;

    while (q--) {
        int t; int i;
        cin >> t >> i;

        long long mask = 1LL << i;

        if (t == 1) {
            if(n & mask){
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        } else if (t == 2) {
            n |= mask;
            cout << n << "\n";
        } else if (t == 3) {
            n &= ~mask;
            cout << n << "\n";
        } else if (t == 4) {
            n ^= mask;
            cout << n << "\n";
        }
    }

    return 0;
}