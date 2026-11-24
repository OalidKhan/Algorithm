#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left]>arr[smallest])
    {
        smallest = left;
    }
        if(right < n && arr[right]>arr[smallest])
    {
        smallest = right;
    }

    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void heapsort(int arr[], int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int n,pivot,piv;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    heapsort(arr,n);

    cout << "Sorted elements: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
