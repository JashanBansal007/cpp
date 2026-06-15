//You are given two integers x and n . compute x^n 

#include <bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int main(){
    int x,n;
    cout<<"enter value of x and n :";
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    return 0;
}
