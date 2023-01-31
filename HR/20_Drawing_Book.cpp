#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int f = p / 2, b = (n / 2) - (p / 2);
    if (f > b)
    {
        cout << b;
    }
    else
    {
        cout << f;
    }

    return 0;
}