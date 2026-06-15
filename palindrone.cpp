//You are given a non-negative integer N . Check whether N is a palindrome or not using loops

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int org = n;
    int rev = 0;
    while(n>0){
        int num = n%10;
        rev = rev*10 + num;
        n = n/10;
    }
    if(org == rev){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

