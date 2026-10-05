#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
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
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
