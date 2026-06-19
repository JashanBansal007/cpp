#include<bits/stdc++.h>
using namespace std;

vector<string> result;

void f(int idx,string &s,string &path){
    if(idx==s.size()){
        result.push_back(path);
        return;
    }

    int num1 = s[idx]-'0';
    if(num1>=1 && num1<=9){
        path.push_back(num1+'a'-1);
        f(idx+1,s,path);
        path.pop_back();
    }

    
        int num2 = (s[idx]-'0')*10 + (s[idx+1]-'0');
        if(num2>=10 && num2<=26){
            path.push_back(num2+'a'-1);
            f(idx+2,s,path);
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
