#include<Iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min = arr[0];
    int index = 1;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i + 1;
        }
    }
    cout<<min<<" "<<index<<endl;
}

