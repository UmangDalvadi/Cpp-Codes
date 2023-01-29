#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        // for (int k = 0; k < 100; k++)
        // {
        //     if (arr[i] == temp[k])
        //     {
        //         i++;
        //         break;
        //     }
        // }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // temp[i] = arr[j];
            }
        }
        // i++;
    }

    cout << count;

    return 0;
}