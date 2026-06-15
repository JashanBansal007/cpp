#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int* arr = new int[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int d;
        cin>>d;

        if(n > 0){
            d = d % n;   


            for(int i = d; i < n; i++){
                if(i > d) cout << " ";
                cout << arr[i];
            }
            for(int i = 0; i < d; i++){
                if(i > 0 || d < n) cout << " ";
                cout << arr[i];
            }
            cout << "\n";
        } else {
            cout << "\n";
        }

        delete[] arr;
    }

    return 0;
}