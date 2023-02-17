#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

long int rev(long int n)
{
    int modul, sum = 0;
    while (n != 0)
    {
        modul = n % 10;
        sum = (sum * 10) + modul;
        n = n / 10;
    }
    return sum;
}

int main()
{
    long int a, b, c, temp, count = 0;
    cin >> a >> b >> c;
    for (long int i = a; i <= b; i++)
    {
        temp = rev(i);
        if (abs(i - temp) % c == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}