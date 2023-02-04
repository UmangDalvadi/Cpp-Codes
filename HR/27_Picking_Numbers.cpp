#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] || (arr[i] + 1) == arr[j])
            {
                count++;
            }
        }
        temp[i] = count;
        count = 0;
    }
    // cout << k;
    int max = temp[0];
    for (int i = 0; i < n; i++)
    {
        if (max < temp[i])
        {
            max = temp[i];
        }
    }
    cout << max;

    return 0;
}