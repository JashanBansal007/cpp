#include<iostream>
using namespace std;

int main(){
    long long q;
    cin >> q;

    while(q--){
        long long t, l, r;
        cin >> t >> l >> r;
        long long cnt = 0;

        if(l > r){
            cout << 0 << "\n";
            continue;
        }

        if(t == 1){
            cnt = r - l - 1;
        }else if(t == 2){
            cnt = r - l;
        }else if(t == 3){
            cnt = r - l;
        }else if(t == 4){
            cnt = r - l + 1;
        }

        if(cnt < 0) cnt = 0;

        cout << cnt << "\n";
    }

    return 0;
}