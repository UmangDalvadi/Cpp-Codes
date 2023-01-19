#include <iostream>
using namespace std;
int main()
{
    long long int arr[5];
    long long int sum[5] = {0, 0, 0, 0, 0}, max, min;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                sum[i] = sum[i] + arr[j];
            }
        }
    }
    max = sum[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < sum[i])
        {
            max = sum[i];
        }
    }
    min = sum[0];
    for (int i = 1; i < 5; i++)
    {
        if (min > sum[i])
        {
            min = sum[i];
        }
    }

    cout << min << " " << max;
}