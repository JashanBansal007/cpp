#include<bits/stdc++.h>
using namespace std;    

int checkBit(int num, int i){
    int mask = 1<<i;
    return (num & mask) != 0;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int j=0;j<32;j++){
        int sum = 0;
        for(int i=0;i<n;i++){
            if(checkBit(arr[i],j)){
                sum++;
            }
        }
        if(sum%3==1){
            ans |= (1<<j);
        }
    }
    cout<<ans<<"\n";
}