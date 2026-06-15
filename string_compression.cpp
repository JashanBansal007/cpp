#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string compressed = "";
        int count = 1;

        for(int i = 1; i < (int)s.length(); i++){
            if(s[i] == s[i - 1]){
                count++;
            }else{
                compressed += s[i - 1];
                if(count > 1){
                    compressed += char('0' + count);
                }
                count = 1;
            }
        }

        compressed += s.back();
        if(count > 1){
            compressed += char('0' + count);
        }

        cout << compressed << "\n";
    }

    return 0;
}


