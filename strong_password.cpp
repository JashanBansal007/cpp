#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, hasSpecial = false;

    for(char c : s){
        if(islower(c))       hasLower = true;
        else if(isupper(c))  hasUpper = true;
        else if(isdigit(c))  hasDigit = true;
        else                 hasSpecial = true;
    }

    int score = hasLower + hasUpper + hasDigit + hasSpecial;

    if(score == 4)       cout << "Strong" << endl;
    else if(score == 3)  cout << "Moderate" << endl;
    else                 cout << "Weak" << endl;

    return 0;
}