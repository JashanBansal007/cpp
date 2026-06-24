#include<bits/stdc++.h>
using namespace std;

void merger(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;

    vector<int> ans;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }

    while(j<m){
        ans.push_back(arr2[j]);
        j++;

    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    

}




int main(){
    int n,m;
    cin>>n>>m;

    int arr1[n], arr2[m];
    for(int i=0;i<n;i++){
        arr1[i+1]>arr1[i];
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        arr2[i+1] > arr2[i];
        cin>>arr2[i];
    }



    merger(arr1,arr2,n,m);
    

}