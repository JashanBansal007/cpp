#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr , arr + n);

    while(q--){
        int x;
        cin>>x;

        int ans = -1;
        int left = 0;
        int right = n-1;

        while(left<=right){
            int mid = left + (right - left)/2;
            if(arr[mid] <=x){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(ans == -1){
            cout<<ans<<endl;
        }
        else{
            cout<<arr[ans]<<endl;
        }
    }
}