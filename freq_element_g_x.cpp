#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    sort(arr, arr + n);
    

    while(q--){
        int x;
        cin>>x;
        
        int left = 0;
        int right = n;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(arr[mid] < x){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        cout << n - left << endl;
    }
}