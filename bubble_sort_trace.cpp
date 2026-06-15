#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        int cnt = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                cnt++;
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Pass " << i + 1 << ": ";
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << ", swaps = " << cnt << endl;

        if(cnt == 0){
            break;
        }
    }
    
}