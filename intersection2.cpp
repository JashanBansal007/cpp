#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
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

    map<int,int> cntA, cntB;
    for(int i=0;i<n;i++){
        cntA[arr[i]]++;
    }
    for(int i=0;i<m;i++){
        cntB[arr2[i]]++;
    }

    vector<int> ans;
    for(auto p : cntA){
        int val = p.first;
        int times = min(cntA[val], cntB[val]);
        while(times--){
            ans.push_back(val);
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