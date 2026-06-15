#include<iostream>
using namespace std;
#include<set>
#include<map>

int main(){
    int n;
    long long x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long,int> mp;
    long long pre = 0;
    int left,right;
    for(int i=0;i<n;i++){
        pre += arr[i];
        if(pre == x){
            cout<<1<<" "<<(i+1)<<"\n";
            return 0;
        }
        if(mp.find(pre - x) != mp.end()){
            left = mp[pre-x] + 1;
            right = i + 1;
            cout<<left<<" "<<right<<"\n";
            return 0;
        }
        if(mp.find(pre) == mp.end()){
            mp[pre] = i + 1;
        }
    }
    cout<<-1<<"\n";
    return 0;
}