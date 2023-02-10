#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n[123], max;
    for (int i = 97; i < 123; i++)
    {
        cin >> n[i];
    }
    max = n[97];
    string x;
    cin >> x;
    int size = x.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 97; j < 123; j++)
        {
            if (x[i] == j)
            {
                if (max < n[j])
                {
                    max = n[j];
                }
            }
        }
    }
    cout << max * size;

    return 0;
}