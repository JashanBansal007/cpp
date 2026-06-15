#include<iostream>
using namespace std;

int main(){
    int n,q,k;
    cin>>n>>q>>k;

    int arr[n+1];
    long long prefix[n+1];
    prefix[0] = 0;
    int sum = 0;
    int mark[n+1];
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum = 0;
        int num = arr[i];
        while(num>0){
            sum += num%10;
            num = num/10;
        }
        
        if(sum == k){
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