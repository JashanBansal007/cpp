#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int index = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i+1;
        }

    }
    cout<<max<<" "<<index<<endl;
}