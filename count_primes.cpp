#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt = 0;
    for(int i = 2; i <= n; i++){
        bool prime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}