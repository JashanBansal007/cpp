#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        int left = 0;
        int right = n - 1;
        
        // Fill odd numbers from left (1, 3, 5, ...)
        for(int i = 1; i <= n; i += 2){
            arr[left] = i;
            left++;
        }
        
        // Fill even numbers from right (2, 4, 6, ...)
        for(int i = 2; i <= n; i += 2){
            arr[right] = i;
            right--;
        }
        
        // Print the array
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
