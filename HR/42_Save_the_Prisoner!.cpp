#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int p, s, c, count;
        cin >> p >> s >> c;
        count = c;
        for (int i = 0; i < s; i++)
        {

            if (count > p)
            {
                count = 1;
            }
            else
            {
                count++;
            }
        }
        // cout << count;
        temp[i] = count;
    }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] + 1 << endl;
    }

    return 0;
}