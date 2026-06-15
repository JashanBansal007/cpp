#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Fast I/O
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) { // Only enter here if i is a factor
                int cnt = 0;
                while (x % i == 0) {
                    cnt++;
                    x /= i;
                }
                cout << i << "^" << cnt << " ";
            }
        }
        if (x > 1) cout << x << "^1 "; // Print the last remaining prime factor
        cout << "\n";
    }
}
