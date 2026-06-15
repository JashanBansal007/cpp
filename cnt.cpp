// Find the number of digits equal to 0 in the decimal representation of N
//  by writing a function that takes N
//  as a parameter and returns the count of zero digits.

#include <iostream>
using namespace std;

int zero(int n){
    int cnt = 0;
    if(n == 0){
        return 1;
    }
    while(n > 0){
        int num = n % 10;
        if(num == 0){
            cnt++;
        }
        n = n / 10;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout<<zero(n)<< endl;
    return 0;
}
