#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int total = 1<<n;
    for(int mask = 1; mask < total; mask++){
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                cout << a[i] << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}