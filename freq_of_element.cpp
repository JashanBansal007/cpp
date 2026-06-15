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
        int first = -1;
        int left = 0;
        int right = n - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(arr[mid] == x){
                first = mid + 1;
                right = mid - 1;
            }
            else if(arr[mid] < x){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        int last = -1;
        left = 0;
        right = n - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(arr[mid] == x){
                last = mid + 1;
                left = mid + 1;
            }
            else if(arr[mid] < x){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(first == -1){
            cout<<0<<endl;
        }
        else{
            cout<<last - first + 1<<endl;
        }
    }
}