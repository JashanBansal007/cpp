#include<iostream>
using namespace std;
#include<set>
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
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    set<int> ans;
    for(int i=0;i<m;i++){
        if(s.find(arr2[i]) != s.end()){
            ans.insert(arr2[i]);
        }
    }

    cout<<ans.size()<<"\n";
    bool first = true;
    for(int x : ans){
        if(!first){
            cout<<" ";
        }
        cout<<x;
        first = false;
    }
    cout<<"\n";

    return 0;
}