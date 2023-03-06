#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // int temp[n];

    for (int i = 0; i < n; i++)
    {
        long long p, s, c, count;
        // 3     7   3
        // 7    19   2
        cin >> p >> s >> c;
        // count = c;
        long long res = (s + c - 1) % p;
        if (res == 0)
        {
            res = p;
        }
        cout << res << endl;

        // for (int j = 0; j < s; j++)
        // {
        //     if(j==0)
        //     {
        //         continue;
        //     }
        //     if (count > p)
        //     {
        //         count = 1;
        //     }
        //     else
        //     {
        //         count++;
        //     }
        // }
        // cout << count;
        // temp[i] = count;
    }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << temp[i] << endl;
    // }

    return 0;
}