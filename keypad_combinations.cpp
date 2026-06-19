#include<bits/stdc++.h>
using namespace std;

vector<string> result;

vector<string> keypad = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void f(int i,string &s,string &path){
    if(i==s.size()){
        result.push_back(path);
        return;
    }

    int digit = s[i]-'0';
    for(int j=0;j<keypad[digit].size();j++){
        path.push_back(keypad[digit][j]);
        f(i+1,s,path);
        path.pop_back();
    }
}

int main(){
    string s;
    cin>>s;

    string path = "";
    f(0,s,path);

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}

