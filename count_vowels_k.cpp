#include<iostream>
using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        s += ch;
    }
    int cnt = 0 ;
    for(int i = 0;i<k;i++){
        if(isVowel(s[i])){
            cnt++;
        }
        
    }
    cout<<cnt<<" ";

    for( int i = k;i<n ; i++){
        if(isVowel(s[i])){
            cnt++;
        }
        if(isVowel(s[i-k])){
            cnt--;
        }
        cout<<cnt<<" ";
    }
    
    return 0;
}