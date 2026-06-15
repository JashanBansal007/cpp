#include<iostream>
#include<algorithm>
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
        
        
        sort(arr, arr + n);
        
       
        bool found = false;
        for(int i = 0; i < n - 1; i += 2){
            if(arr[i] != arr[i + 1]){
                cout << arr[i] << endl;
                found = true;
                break;
            }
        }
        
       
        if(!found){
            cout << arr[n - 1] << endl;
        }
    }
    
    return 0;
}
