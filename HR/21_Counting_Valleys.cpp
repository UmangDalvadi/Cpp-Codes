#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, up = 0;
    cin >> n;
    int tmp[n];
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U')
        {
            up++;
            tmp[i] = up;
        }
        else
        {
            up--;
            tmp[i] = up;
        }
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (tmp[i] < 0 && tmp[i + 1] == 0)
        {
            a++;
        }
    }
    cout << a;

    return 0;
}