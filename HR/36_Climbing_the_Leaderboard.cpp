#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n], tmp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a1[tmp + 1];
        if (a1[tmp + 1] != a1[tmp])
        {
            tmp++;
        }
    }
    int u;
    cin >> u;
    int s;

    for (int i = 0; i < u; i++)
    {
        cin >> s;
        while (tmp != 0 && a1[tmp] <= s)
        {
            tmp--;
        }
        cout << tmp + 1 << endl;
    }

    return 0;
}