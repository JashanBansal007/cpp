#include<iostream>
#include<set>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    set <int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }

    cout<<s.size()<<"\n";
    bool first = true;
    for(int x : s){
        if(!first){
            cout<<" ";
        }
        cout<<x;
        first = false;
    }
    cout<<"\n";

    return 0;
}