#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    string arr2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> arr2[i];
    }
    int tmp[q];

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr[j])
            {
                count++;
            }
        }
        tmp[i] = count;
        count = 0;
    }
    for (int i = 0; i < q; i++)
    {
        cout << tmp[i] << endl;
    }

    return 0;
}