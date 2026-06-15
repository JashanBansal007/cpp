#include<iostream>
using namespace std;

int main(){
    int n,targert;
    cin>>n>>targert;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == targert){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}