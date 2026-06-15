#include<iostream>
using namespace std;
#include<set>

int main(){
    int q;
    cin>>q;
    set<int> s;

    while(q--){
        int type;
        cin>>type;

        if(type == 3){
            cout<<s.size()<<"\n";
            continue;
        }

        int x;
        cin>>x;

        if(type == 1){
            s.insert(x);
        }
        if(type == 2){
            s.erase(x);
        }
        if(type == 4){
            if(s.find(x) != s.end()){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }

    }

    return 0;
}