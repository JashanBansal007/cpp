#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool possible(const vector<long long>& a,long long n, long long gap, long long k) {
    long long cowplaced = 1;
    long long prev = a[0];

    for (long long i = 1; i < n; i++) {
        if (a[i] - prev >= gap) {
            cowplaced++;
            prev = a[i]; 
        }
        if (cowplaced >= k) return true; 
    }
    return cowplaced >= k;
}

int main() {
   

    long long n, k;
    if (!(cin >> n >> k)) return 0;

    
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    sort(a.begin(), a.end());

    long long ans = 0;
    long long l = 1; 
    long long r = a[n - 1] - a[0]; 

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        
        if (possible(a, n, mid, k)) {
            ans = mid;      
            l = mid + 1;
        } else {
            r = mid - 1;    
        }
    }

    cout << ans << endl;

    return 0;
}
