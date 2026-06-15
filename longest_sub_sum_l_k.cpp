#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long sum = 0;
    int maxLen = 0;
    int left = 0;
    for(int right = 0;right<n;right++){
        sum += arr[right];
        while(sum >= k && left <= right){
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    cout<<maxLen<<"\n";

    return 0;
}