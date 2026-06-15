#include<iostream>
using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int maxOnes = 0, resultRow = -1;

    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
        if(cnt > maxOnes){
            maxOnes = cnt;
            resultRow = i;
        }
    }

    cout << resultRow << endl;

    return 0;
}