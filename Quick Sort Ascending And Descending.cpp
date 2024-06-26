#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
int t=0;
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low ;
    int j = high;

    while (true) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        while (j >= i && arr[j] >= pivot) {
            j--;
        }

        if (i <= j) {

            swap(arr[i], arr[j]);


        } else {

            swap(arr[low], arr[j]);
            t++;
            return j;
        }
    }
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}


signed main()
{
    int temp;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
     cout<<"Enter the array : ";
     for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    quickSort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Descending Order Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}



