#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // Reverse in-place using two pointers
    int left = 0;
    int right = n - 1;
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // Print the reversed array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}