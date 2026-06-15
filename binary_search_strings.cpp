#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    string x;
    cin >> x;

    int lo = 0, hi = n - 1;
    bool found = false;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x){
            found = true;
            break;
        } else if(arr[mid] < x){
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    if(found){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
