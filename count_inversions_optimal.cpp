#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int l,int mid,int r){
    int i=l;
    int j=mid+1;


    int ans = 0;
    vector<int> temp;
    while(i<=mid && j<=r){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            ans += (mid-i+1);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=l;k<=r;k++){
        arr[k] = temp[k-l];
    }
    return ans;
}



int inversions(int arr[], int l, int r){
    if(l>=r) return 0;

    int mid = (l+r)/2;  

    int ans1 = inversions(arr,l,mid);

    int ans2 = inversions(arr,mid+1,r);

    int ans3 = merge(arr,l,mid,r);


    return ans1 + ans2 + ans3;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = inversions(arr,0,n-1);
    cout<<ans<<endl;

}