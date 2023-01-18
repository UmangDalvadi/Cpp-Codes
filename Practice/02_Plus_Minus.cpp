#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float size, plus = 0.000000, minus = 0.000000, zero = 0.000000;
    cin >> size;
    int arr[int(size)];
    for (int i = 0; i < int(size); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < int(size); i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    // float(size, plus, minus, zero);

    cout << setprecision(6) << fixed << plus / size << endl;
    cout << minus / size << endl;
    cout << zero / size << endl;
    return 0;
}
