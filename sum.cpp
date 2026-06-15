//Given an integer N , find the sum of its digits. using loops

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int sum = 0;
    while(n>0){
        int num = n%10;
        sum += num;
        n = n/10;
    }
    cout<<sum<<endl;
    return 0;
}