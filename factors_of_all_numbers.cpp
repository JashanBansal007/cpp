#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> factors(n+1);
    for(int i =1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            factors[j].push_back(i);
        }
         for(int x : factors[i]) cout << x << ' ';
         cout << '\n';
    }
    
}