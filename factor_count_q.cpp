#include<bits/stdc++.h>
using namespace std;

int main(){
    const int N = 1000000;
    vector<int> arr(N+1,0);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            arr[j]++;
        }
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<arr[x]<<"\n";
    }
}