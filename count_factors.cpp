#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long cnt = 0;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i == n / i){
                cnt += 1;
            }else{
                cnt += 2;
            }
        }
    }

    cout << cnt << "\n";
}