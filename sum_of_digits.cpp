#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin >> n;

    int sum = 0;
    for(char digit : n){
        sum += (digit - '0');
    }

    cout << sum << endl;

    return 0;
}