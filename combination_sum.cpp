#include<bits/stdc++.h>
using namespace std; 

vector<vector<int>> result;

void f(int ind, int sum,int n,int target,vector<int> &path,vector<int> &arr){
    if(sum == target){
        result.push_back(path);
        return;
    }

    if(ind == n || sum > target){
        return;
    }

    path.push_back(arr[ind]);
    f(ind,sum+arr[ind],n,target,path,arr);
    path.pop_back();

    f(ind+1,sum,n,target,path,arr);
}

int main(){
    int n,target;
    cin>>n>>target;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> path;
    f(0,0,n,target,path,arr);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i].size();
        for(int j=0;j<result[i].size();j++){
            cout<<" "<<result[i][j];
        }
        cout<<"\n";
    }

}
