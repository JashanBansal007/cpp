// Find the HCF of A
//  and B
//  by writing a function that takes A
//  and B
//  as parameters and returns their HCF.

#include <iostream>
using namespace std;

int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}

int main(){
    int a,b;
    cout<<"enter values of a and b:";
    cin>>a>>b;
    cout<<hcf(a,b)<<endl;
    return 0;
}