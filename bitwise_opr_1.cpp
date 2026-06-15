#include<bits/stdc++.h>
using namespace std;

int main(){
    

    long long a, b;
    cin >> a >> b;

    long long and_result = a & b;
    long long or_result = a | b;
    long long xor_result = a ^ b;

    cout << and_result << " " << or_result << " " << xor_result << "\n";

    return 0;
}