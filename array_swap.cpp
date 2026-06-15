#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){ 
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        // Swap every pair of alternate elements
        for(int i = 0; i < n - 1; i += 2){
            swap(arr[i], arr[i + 1]);
        }
        
        // Print the array
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
