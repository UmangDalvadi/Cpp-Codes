#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int arr[6][6], sum = 0, max = -1000;
    int tmp[7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    // cout << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 1 || i == 2 || i == 3 || i == 4)
            {
                if ((i + j) > i && (i + j) < (i + 5))
                {
                    sum = sum + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];

                    // cout << arr[i - 1][j - 1] << " " << arr[i - 1][j] << " " << arr[i - 1][j + 1] << endl
                    //      << "  " << arr[i][j] << "  " << endl
                    //      << arr[i + 1][j - 1] << " " << arr[i + 1][j] << " " << arr[i + 1][j + 1];

                    // cout << endl
                    //      << endl;

                    // cout << sum << " ";

                    // cout << endl
                    //      << endl;

                    if (max < sum)
                    {
                        tmp[0] = arr[i - 1][j - 1];
                        tmp[1] = arr[i - 1][j];
                        tmp[2] = arr[i - 1][j + 1];
                        tmp[3] = arr[i][j];
                        tmp[4] = arr[i + 1][j - 1];
                        tmp[5] = arr[i + 1][j];
                        tmp[6] = arr[i + 1][j + 1];
                        max = sum;
                    }
                    sum = 0;
                }
            }
        }
    }

    // for print hourglass
    cout << endl
         << tmp[0] << " " << tmp[1] << " " << tmp[2] << "\n"
         << "  " << tmp[3] << "  "
         << "\n"
         << tmp[4] << " " << tmp[5] << " " << tmp[6] << endl
         << endl;

    cout << max;

    return 0;
}