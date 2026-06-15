#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    bool found = false;
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;
    while(left <= right){
        if(arr[mid] == x){
            found = true;
            break;
        } else if(arr[mid] < x){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }


    if(found){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}