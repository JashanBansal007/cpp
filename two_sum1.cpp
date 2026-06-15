#include<iostream>
#include<map>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> firstIndex;
    for(int i=0;i<n;i++){
        int req = x - arr[i];
        if(firstIndex.find(req) != firstIndex.end()){
            cout << firstIndex[req] << " " << (i + 1) << "\n";
            return 0;
        }

        if(firstIndex.find(arr[i]) == firstIndex.end()){
            firstIndex[arr[i]] = i + 1;
        }
    }

    cout << -1 << "\n";
    return 0;
}