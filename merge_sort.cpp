#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int l,int mid,int r){
    int i=l;
    int j=mid+1;

    vector<int> temp;
    
    while(i<=mid &&j<=r){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
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
    for(int i=0;i<temp.size();i++){
        arr[l+i] = temp[i];
    } 
}


void mergeSort(int arr[],int l,int r){
    if(l==r){
        return;
    }

    int mid = (l+r)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,mid,r);
}





int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}