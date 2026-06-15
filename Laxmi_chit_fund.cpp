#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int total = 0;
    for(int i=0;i<n;i++){
        total += arr[i];
    }

    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    int average = total/n;


    cout<<total<<" "<<max<<" "<<min<<" "<<average<<endl;
}