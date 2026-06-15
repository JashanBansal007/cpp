#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    int i = 0;
    int j = 0;
    bool firstPrinted = false;

    while(i < (int)s.size() && j < (int)t.size()){
        if(firstPrinted) cout << "-";
        cout << s[i++];
        firstPrinted = true;

        cout << "-";
        cout << t[j++];
    }

    while(i < (int)s.size()){
        if(firstPrinted) cout << "-";
        cout << s[i++];
        firstPrinted = true;
    }

    while(j < (int)t.size()){
        if(firstPrinted) cout << "-";
        cout << t[j++];
        firstPrinted = true;
    }

    return 0;
}