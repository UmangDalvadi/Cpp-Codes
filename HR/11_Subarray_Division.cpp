#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, d, m, sum = 0;
    cin >> n;
    int arr[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> d >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i + j];

            // cout << "sum: " << arr[i + j] << " ";
        }
        if (sum == d)
        {
            count++;
        }
        sum = 0;
    }
    // cout << endl;

    cout << count;

    return 0;
}