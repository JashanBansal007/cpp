#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        int cnt = 0;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
            cnt++;
        }
        arr[j + 1] = key;

        cout << "Pass " << i << ": ";
        for(int k = 0; k < n; k++){
            if(k > 0) cout << " ";
            cout << arr[k];
        }

        cout << " , ";
        for(int k = 0; k <= i; k++){
            if(k > 0) cout << " ";
            cout << arr[k];
        }

        cout << " |";
        if(i + 1 < n) cout << " ";
        for(int k = i + 1; k < n; k++){
            if(k > i + 1) cout << " ";
            cout << arr[k];
        }

        cout << " , shifts = " << cnt << endl;
    }
}