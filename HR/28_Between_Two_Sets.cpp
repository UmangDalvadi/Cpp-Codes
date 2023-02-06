#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // if (n > m)
    // {
    //     max = n;
    // }
    // else
    // {
    //     max = m;
    // }

    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int count = 0, count2 = 0;
    for (int i = a[n - 1]; i <= b[0]; i)
    {
        // cout<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
            {
                count++;
            }
        }
        for (int k = 0; k < m; k++)
        {
            if (b[k] % i == 0)
            {
                count++;
            }
        }
        // cout << count << endl;
        if (count == (n + m))
        {
            count2++;
        }
        count = 0;
        i++;
    }
    // cout << "\n";
    cout << count2;

    return 0;
}