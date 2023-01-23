#include <iomanip>
#include <string.h>
#include <iostream>

using namespace std;

int partation(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high, temp;

    while (i < j)
    {
        while (!(arr[i] > pivot))
        {
            i++;
        }
        while (!(arr[j] <= pivot))
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high)
{
    // int i = low, j = high, k = low, mid;
    int pivot;
    if (low < high)
    {
        pivot = partation(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
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
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}