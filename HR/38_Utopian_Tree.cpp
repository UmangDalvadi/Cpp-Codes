#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
// iiijnk
int main()
{
    int n, arr[60], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long int arr2[70];
    for (int i = 0; i <= 60; i++)
    {
        if (i % 2 == 0)
        {
            count = count + 1;
            arr2[i] = count;
        }
        else
        {
            count = count * 2;
            arr2[i] = count;
        }
    }
    int i = 0, j = 0;
    while (i <= 61)
    {
        if (arr[j] == i)
        {
            cout << arr2[i]<<endl;
            j++;
            i = 0;
        }
        i++;
    }

    return 0;
}