#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int sum = 0;
        while(n>0){
            int num = n%10;
            sum += num;
            n = n/10;
        }

        if(sum == 7){
            cout<<"Thala for a reason"<<endl;
        }
        else{
            cout<<"Blocked for no reason"<<endl;
        }
    }
}