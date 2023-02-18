#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, count = 0, share = 5;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        count += (share / 2);
        share = 3 * (share / 2);
    }
    cout << count;

    return 0;
}