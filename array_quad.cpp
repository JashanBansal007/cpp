#include<iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int count = 0;
    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            for(int k = j + 1; k < n - 1; k++){
                for(int l = k + 1; l < n; l++){
                    if(arr[i] - 2*arr[j] + 3*arr[k] - 4*arr[l] == x){
                        count++;
                    }
                }
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
