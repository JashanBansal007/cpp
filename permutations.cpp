#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void permute(int n,vector<int> &used,vector<int> &arr,vector<int> &path){
    if(path.size() == arr.size()){
        result.push_back(path);
        return;
    }

    for(int i=0;i<n;i++){
        if(!used[i]){
            path.push_back(arr[i]);
            used[i] = true;

            permute(n, used, arr, path);

            path.pop_back();
            used[i] = false;
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> path;
    vector<int> used(n,0);

    permute(n, used, arr, path);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            if(j>0) cout<<" ";
            cout<<result[i][j];
        }
        cout<<"\n";
    }
}
