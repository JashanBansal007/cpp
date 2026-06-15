#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(q--){
        int x;
        cin>>x;
        int ans = -1;
        int left = 0;
        int right = n - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(arr[mid] == x){
                ans = mid + 1;
                break;
            }
            else if(arr[mid] < x){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}