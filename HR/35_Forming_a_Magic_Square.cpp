#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace std;

int ms0(int arr[3][3])
{
    int sum = abs(8 - arr[0][0]) + abs(3 - arr[0][1]) + abs(4 - arr[0][2]) + abs(1 - arr[1][0]) + abs(5 - arr[1][1]) + abs(9 - arr[1][2]) + abs(6 - arr[2][0]) + abs(7 - arr[2][1]) + abs(2 - arr[2][2]);

    return sum;
}
int ms1(int arr[3][3])
{
    int sum = abs(6 - arr[0][0]) + abs(1 - arr[0][1]) + abs(8 - arr[0][2]) + abs(7 - arr[1][0]) + abs(5 - arr[1][1]) + abs(3 - arr[1][2]) + abs(2 - arr[2][0]) + abs(9 - arr[2][1]) + abs(4 - arr[2][2]);

    return sum;
}
int ms2(int arr[3][3])
{
    int sum = abs(2 - arr[0][0]) + abs(7 - arr[0][1]) + abs(6 - arr[0][2]) + abs(9 - arr[1][0]) + abs(5 - arr[1][1]) + abs(1 - arr[1][2]) + abs(4 - arr[2][0]) + abs(3 - arr[2][1]) + abs(8 - arr[2][2]);

    return sum;
}
int ms3(int arr[3][3])
{
    int sum = abs(4 - arr[0][0]) + abs(9 - arr[0][1]) + abs(2 - arr[0][2]) + abs(3 - arr[1][0]) + abs(5 - arr[1][1]) + abs(7 - arr[1][2]) + abs(8 - arr[2][0]) + abs(1 - arr[2][1]) + abs(6 - arr[2][2]);

    return sum;
}
int ms4(int arr[3][3])
{
    int sum = abs(8 - arr[0][0]) + abs(1 - arr[0][1]) + abs(6 - arr[0][2]) + abs(3 - arr[1][0]) + abs(5 - arr[1][1]) + abs(7 - arr[1][2]) + abs(4 - arr[2][0]) + abs(9 - arr[2][1]) + abs(2 - arr[2][2]);

    return sum;
}
int ms5(int arr[3][3])
{
    int sum = abs(6 - arr[0][0]) + abs(7 - arr[0][1]) + abs(2 - arr[0][2]) + abs(1 - arr[1][0]) + abs(5 - arr[1][1]) + abs(9 - arr[1][2]) + abs(8 - arr[2][0]) + abs(3 - arr[2][1]) + abs(4 - arr[2][2]);

    return sum;
}
int ms6(int arr[3][3])
{
    int sum = abs(2 - arr[0][0]) + abs(9 - arr[0][1]) + abs(4 - arr[0][2]) + abs(7 - arr[1][0]) + abs(5 - arr[1][1]) + abs(3 - arr[1][2]) + abs(6 - arr[2][0]) + abs(1 - arr[2][1]) + abs(8 - arr[2][2]);

    return sum;
}
int ms7(int arr[3][3])
{
    int sum = abs(4 - arr[0][0]) + abs(3 - arr[0][1]) + abs(8 - arr[0][2]) + abs(9 - arr[1][0]) + abs(5 - arr[1][1]) + abs(1 - arr[1][2]) + abs(2 - arr[2][0]) + abs(7 - arr[2][1]) + abs(6 - arr[2][2]);

    return sum;
}

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int temp[8];
    // for (int i = 0; i < 8; i++)
    // {
    temp[0] = ms0(arr);
    temp[1] = ms1(arr);
    temp[2] = ms2(arr);
    temp[3] = ms3(arr);
    temp[4] = ms4(arr);
    temp[5] = ms5(arr);
    temp[6] = ms6(arr);
    temp[7] = ms7(arr);

    int min = temp[0];
    for (int i = 0; i < 8; i++)
    {
        if (min > temp[i])
        {
            min = temp[i];
        }
    }
    cout << min;

    return 0;
}