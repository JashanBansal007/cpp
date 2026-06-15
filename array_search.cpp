#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            found = true;
            break;
        }
    }
    
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}