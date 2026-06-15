#include<iostream>
using namespace std;
#include<unordered_map>

int main(){
    int q;
    cin>>q;
    unordered_map<int,int> freq;
    int distinctCount = 0;

    while(q--){
        int type;
        cin>>type;
        if(type == 3){
            cout<<distinctCount<<"\n";
            continue;
        }

        int x;
        cin>>x;

        if(type == 1){
            if(freq[x] == 0){
                distinctCount++;
            }
            freq[x]++;
        }
        if(type == 2){
            if(freq[x] > 0){
                freq[x]--;
                if(freq[x] == 0){
                    distinctCount--;
                }
            }
        }
        if(type == 4){
            if(freq[x] > 0){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }

    return 0;
}