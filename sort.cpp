#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int mn = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[mn]) mn = j;
        }
        swap(arr[i], arr[mn]);
    }
}

void bubble_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = n-1 ; i>=0 ; i--){
        int didswap = 0;
        for(int j=0 ; j<=i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap == 0)
            break;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    selection_sort(arr);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

