#include <iomanip>
#include <string.h>
#include <iostream>

using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low, temp[100];

    while (i <= mid && j <= high)
    {

        if (arr[i] > arr[j])
        {
            temp[k] = arr[j];
            k++;
            j++;
        } 
        else
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        // cout << temp[i] << " ";
        arr[i] = temp[i];
    }
}

void mergesort(int arr[], int low, int high)
{
    // int i = low, j = high, k = low, mid;
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}