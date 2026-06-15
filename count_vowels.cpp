#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int prefix[n+1];
    prefix[0] = 0;
    for(int i=1;i<=n;i++){
        char ch = str[i-1];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            prefix[i] = prefix[i-1] + 1;
        }
        else{
            prefix[i] = prefix[i-1];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int cnt = prefix[r] - prefix[l-1];
        cout<<cnt<<endl;
    }
}