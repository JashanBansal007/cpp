

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<"reverse of number is :";
    while(n>0){
        int num = n%10;
        cout<<num;
        n = n/10;
        cout<<endl;
    }
    return 0;
}

