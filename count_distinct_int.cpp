#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    int n,k;
    cin>>n>>k;
    if(k<=0 || k>n){
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> freq;
    for(int i=0;i<k;i++){
        freq[arr[i]]++;
    }
    cout<<freq.size()<<" ";

    for(int i =k ; i<n ; i++){
        freq[arr[i]]++;
        freq[arr[i-k]]--;
        if(freq[arr[i-k]]==0){
            freq.erase(arr[i-k]);
        }
        cout<<freq.size()<<" ";
    }
    cout<<"\n";

    return 0;
}