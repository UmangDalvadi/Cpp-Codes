#include <iostream>
using namespace std;

int *multi(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= 38)
        {
            int temp = arr[i];
            int val = temp % 10;
            if (val < 5)
            {
                temp = temp - val;
                temp = temp + 5;
            }
            else
            {
                val = 10 - val;
                // temp = temp - val;
                temp = temp + val;
            }
            if (temp - arr[i] < 3)
            {
                arr[i] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    multi(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << endl;
    }
}