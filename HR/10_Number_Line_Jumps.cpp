#include <iostream>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int temp1 = v1, temp2 = v2;
    for (int i = 0; i < 10000; i++)
    {
        if (x1 + v1 == x2 + v2)
        {
            cout << "YES";
            break;
        }
        else
        {
            v1 = v1 + temp1;
            v2 = v2 + temp2;
        }
    }
    if (x1 + v1 != x2 + v2)
    {
        cout << "NO";
    }
}