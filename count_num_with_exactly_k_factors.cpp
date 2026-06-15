#include<iostream>
using namespace std;

int main(){
    int n,q,k;
    cin>>n>>q>>k;

    int arr[n+1];
    long long prefix[n+1];
    prefix[0] = 0;
    int mark[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        int cnt = 0;
        for(int j=1;j*j<=arr[i];j++){
            if(arr[i]%j == 0){
                cnt++;
                if(j*j != arr[i]){
                    cnt++;
                }
            }
        }

        if(cnt == k){
            mark[i] = 1;
        }
        else{
            mark[i] = 0;
        }
        prefix[i] = prefix[i-1] + mark[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        long long cnt = prefix[r] - prefix[l-1];
        cout<<cnt<<endl;
    }
}