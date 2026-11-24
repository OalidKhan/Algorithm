#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i=0 ; i<n ; i++){
        int min_idx = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
    cout << "Sorted elements: ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
