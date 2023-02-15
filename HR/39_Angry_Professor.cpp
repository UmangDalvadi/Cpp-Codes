#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int testcase, count = 0;
    cin >> testcase;
    int res[testcase];
    for (int i = 0; i < testcase; i++)
    {
        int size, minatt;
        cin >> size >> minatt;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
            if (arr[j] <= 0)
            {
                count++;
            }
        }
        if (count >= minatt)
        {
            res[i] = 0;
        }
        else
        {
            res[i] = 1;
        }
        count = 0;
    }
    for (int i = 0; i < testcase; i++)
    {
        if (res[i] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}