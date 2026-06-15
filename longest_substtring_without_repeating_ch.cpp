#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#include<map>
#include<vector>

int main(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    map<char,int> freq;
    int maxLen = 0;
    int left = 0;

    for(int right=0; right<n; ++right){
        char ch = s[right];
        freq[ch]++;
        while((int)freq.size() > k){
            char leftChar = s[left];
            freq[leftChar]--;
            if(freq[leftChar] == 0) freq.erase(leftChar);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    cout<<maxLen<<"\n";
    return 0;
}