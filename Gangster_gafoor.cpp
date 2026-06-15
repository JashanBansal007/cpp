#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    vector<int> result;
    int i = n - 1;  
    int j = 0;
    bool found = false;

  
    while(i >= 0 && !found){
        if(arr[i][j] == -1){
            found = true;
            break;
        }
        result.push_back(arr[i][j]);
        i--;
    }

   
    i = 0; j = 1;
    while(j < m && !found){
        if(arr[i][j] == -1){
            found = true;
            break;
        }
        result.push_back(arr[i][j]);
        j++;
    }

    i = 1; j = m - 1;
    while(i < n && !found){
        if(arr[i][j] == -1){
            found = true;
            break;
        }
        result.push_back(arr[i][j]);
        i++;
    }

    i = n - 1; j = m - 2;
    while(j > 0 && !found){
        if(arr[i][j] == -1){
            found = true;
            break;
        }
        result.push_back(arr[i][j]);
        j--;
    }

    for(int k = 0; k < result.size(); k++){
        if(k > 0) cout << " ";
        cout << result[k];
    }
    cout << "\n";

    return 0;
}