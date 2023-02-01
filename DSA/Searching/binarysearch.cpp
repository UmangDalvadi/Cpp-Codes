#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  //add
    }
    int key;
    cin >> key;
    int low = 0, high = n;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
    }
    if (arr[mid] != key)
    {
        cout << -1;
    }

    return 0;
}
