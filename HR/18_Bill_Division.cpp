#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, k;
    long sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (k == i)
        {
            continue;
        }
        sum = sum + arr[i];
    }
    if ((sum / 2) == b)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << b - (sum / 2);
    }

    return 0;
}