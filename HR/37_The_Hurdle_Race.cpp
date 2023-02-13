#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, dose, max;
    cin >> n >> dose;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            max = arr[0];
        }
        else
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }
    if (dose >= max)
    {
        cout << 0;
    }
    else
    {
        cout << max - dose;
    }

    return 0;
}