#include <iostream>
using namespace std;

int main()
{
    int size, max, count = 0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }
    cout << count;
}