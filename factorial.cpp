// Find the factorial of N
//  by writing a function that takes N
//  as a parameter and returns N!
// ,

#include <iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<"the factorial of "<<n<<" is :"<<fact(n)<<endl;
    return 0;
}
