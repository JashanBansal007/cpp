#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int> &arr, int low , int high){
    if(low<high){
        int pindex = partition(arr,low,high);
        qs(arr,low,pindex - 1);
        qs(arr,pindex+1,high);
    }
}

vector<int> quicksort(vector<int> &arr , int n){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main(){
    vector<int> arr = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    int n = arr.size();
    
    cout << "Before sorting: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    quicksort(arr, n);
    
    cout << "After sorting: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}