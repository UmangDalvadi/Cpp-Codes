#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i][2] - arr[i][1]) == abs(arr[i][2] - arr[i][0]))
        {
            cout << "Mouse C" << endl;
        }
        else if (abs(arr[i][2] - arr[i][1]) < abs(arr[i][2] - arr[i][0]))
        {
            cout << "Cat B" << endl;
        }
        else if (abs(arr[i][2] - arr[i][1]) > abs(arr[i][2] - arr[i][0]))
        {
            cout << "Cat A" << endl;
        }
    }

    return 0;
}