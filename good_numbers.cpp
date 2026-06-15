#include<iostream>
using namespace std;
#include<unordered_set>

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    if(k<=0 || k>n){
        return 0;
    }

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_set<int> good;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        good.insert(x);
    }

    int cnt = 0;
    for(int i=0;i<k;i++){
        if(good.find(arr[i]) != good.end()){
            cnt++;
        }
    }
    cout<<cnt;

    for(int i=k;i<n;i++){
        if(good.find(arr[i]) != good.end()){
            cnt++;
        }
        if(good.find(arr[i-k]) != good.end()){
            cnt--;
        }
        cout<<" "<<cnt;
    }

    cout<<"\n";

    return 0;

}