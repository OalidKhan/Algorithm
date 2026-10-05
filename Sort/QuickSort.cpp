#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low ; j<high ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i+1], arr[high]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pivot = Partition(arr, low, high);
        QuickSort(arr, low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    QuickSort(arr, 0, n-1);
    
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
