#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int n, count = 1, pair = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     // cin >> arr[i];
    //     cout << arr[i] << " ";
    // }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            pair = pair + (count / 2);
            count = 1;
        }
    }
    cout << pair;

    return 0;
}