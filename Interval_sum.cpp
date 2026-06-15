#include<iostream>
using namespace std;

int main(){
    long long q;
    cin>>q;

    while(q--){
        long long l,r;
        cin>>l>>r;

        long long sum = 0;
        sum = (r * (r + 1)) / 2 - ((l - 1) * l) / 2;
        cout<<sum<<"\n";
    }
}