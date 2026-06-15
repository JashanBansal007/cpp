#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<(int)s.length();i++){
        if(s[i]=='a'){
            cnt1++;
        }
        else if(s[i]=='b'){
            cnt2++;
        }
    }

    if(cnt1==cnt2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}