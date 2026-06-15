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
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid] == x){
                ans = mid +1;
                break;
            }
            else if(arr[mid] < x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout<<ans<<"\n";
    }
    
}