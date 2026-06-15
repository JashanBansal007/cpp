#include<iostream>
using namespace std;
#include<unordered_map>

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    unordered_map<int,int> pos;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pos[arr[i]] = i + 1;
    }
    int x;
    while(q--){
        cin>>x;
        if(pos.find(x) != pos.end()){
            cout << pos[x] << "\n";
        }else{
            cout << -1 << "\n";
        }
    }

    return 0;
}