#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        int* arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int writeIndex = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                arr[writeIndex] = arr[i];
                writeIndex++;
            }
        }

        while(writeIndex < n){
            arr[writeIndex] = 0;
            writeIndex++;
        }

        for(int i=0;i<n;i++){
            if(i > 0) cout << " ";
            cout << arr[i];
        }
        cout << "\n";

        delete[] arr;
    }

    return 0;
}