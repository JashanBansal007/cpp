#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int binomial(int n,int r){
    if(r==0 || r==n){
        return 1;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int r,n;
    cin>>n>>r;
    cout<<binomial(n,r)<<endl;
}
