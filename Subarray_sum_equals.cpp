#include<iostream>
using namespace std;
#include<set>

bool checkSubarraySum(long long a[],int n,long long x){
    set<long long> st;
    long long pre = 0;
    for(int i =0; i<n;i++){
        pre += a[i];
        if(pre == x){
            return true;
        }
        if(st.find(pre - x) != st.end()){
            return true;
        }
        st.insert(pre);
    }
    return false;
}

int main(){
    int  n;
    long long x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkSubarraySum(arr,n,x)){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";
}
}