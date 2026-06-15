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
        int x,y;
        cin>>x>>y;
        int first = -1;
        int left = 0;
        int right = n - 1;

        while(left<=right){
            int mid = left + (right-left)/2;
            if(arr[mid] >= x){
                first = mid;
                right = mid - 1;
            }
            
            else{
                left = mid + 1;
            }
        }

        left = 0;
        right = n - 1;
        int last = -1;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(arr[mid] <= y){
                last = mid ;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(first == -1 || last == -1 || first > last){
            cout << 0 << "\n";
        } else {
            cout << last - first + 1 << "\n";
        }
    }
}