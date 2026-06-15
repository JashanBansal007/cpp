#include<iostream>
#include<string>
using namespace std;
#include<map>
#include<algorithm>

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    map<char,int> freq;
    int maxLen = 0;
    int left = 0;

    for(int right = 0;right<n;right++){
        char ch = s[right];
        freq[ch]++;
        while(freq.size()>k){
            char lchar = s[left];
            freq[lchar]--;
            if(freq[lchar] == 0){
                freq.erase(lchar);
            }
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    cout<<maxLen<<"\n";
    return 0;
}