#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, min, max, minc = 0, maxc = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minc++;
        }
        else if (max < arr[i])
        {
            max = arr[i];
            maxc++;
        }
    }
    cout << maxc << " " << minc;

    return 0;
}