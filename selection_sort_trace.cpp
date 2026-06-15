#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int j=0; j<n; j++){
        cin>>arr[j];
    }

    for(int j=0; j<n-1; j++){
        int minValue = arr[j];
        int loc = j;
        for(int k=j+1; k<n; k++){
            if(arr[k] < minValue){
                minValue = arr[k];
                loc = k;
            }
        }
        swap(arr[j], arr[loc]);

        cout << "Pass " << j + 1 << ": ";
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << ", min_selected = " << minValue << endl;
    }


}