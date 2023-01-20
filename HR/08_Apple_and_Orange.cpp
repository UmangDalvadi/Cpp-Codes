#include <iostream>
using namespace std;

int main()
{
    int s, t, a, o, x, y, ac = 0, oc = 0;
    cin >> s >> t >> a >> o >> x >> y;
    int m[x], n[y];
    for (int i = 0; i < x; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (a + m[i] >= s && a + m[i] <= t)
        {
            ac++;
        }
    }
    for (int i = 0; i < y; i++)
    {
        if (o + n[i] >= s && o + n[i] <= t)
        {
            oc++;
        }
    }
    cout << ac << endl
         << oc;
}