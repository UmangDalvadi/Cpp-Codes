#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], type[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            type[0]++;
        }
        if (arr[i] == 2)
        {
            type[1]++;
        }
        if (arr[i] == 3)
        {
            type[2]++;
        }
        if (arr[i] == 4)
        {
            type[3]++;
        }
        if (arr[i] == 5)
        {
            type[4]++;
        }
    }
    if (type[0] >= type[1] && type[0] >= type[2] && type[0] >= type[3] && type[0] >= type[4])
    {
        cout << 1;
    }
    else if (type[1] >= type[0] && type[1] >= type[2] && type[1] >= type[3] && type[1] >= type[4])
    {
        cout << 2;
    }
    else if (type[2] >= type[1] && type[2] >= type[0] && type[2] >= type[3] && type[2] >= type[4])
    {
        cout << 3;
    }
    else if (type[3] >= type[1] && type[3] >= type[2] && type[3] >= type[0] && type[3] >= type[4])
    {
        cout << 4;
    }
    else if (type[4] >= type[1] && type[4] >= type[2] && type[4] >= type[3] && type[4] >= type[0])
    {
        cout << 5;
    }

    return 0;
}