//in a very big input  --> Timeout error!!

// #include <iostream>
// #include <iomanip>
// #include <string.h>

// using namespace std;

// void sort(int arr[], int n)
// {
//     if (n == 0)
//     {
//         cout << -1;
//         // return;
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n - i; j++)
//             {
//                 if (arr[j] < arr[j + 1])
//                 {
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//         }
//         cout << arr[0];
//     }
// }

// int main()
// {
//     int b, n, m, k = 0;
//     cin >> b >> n >> m;
//     int key[n], usb[m], temp[99999];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> key[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> usb[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (key[i] + usb[j] <= b)
//             {
//                 temp[k] = key[i] + usb[j];
//                 k++;
//             }
//         }
//     }
//     // cout << k;
//     sort(temp, k);

//     return 0;
// }


//Optimized
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int b, n, m, k = -1, ans = 0;
    cin >> b >> n >> m;
    int key[n], usb[m];
    for (int i = 0; i < n; i++)
    {
        cin >> key[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> usb[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans = key[i] + usb[j];
            if (ans <= b && ans > k)
            {
                k = ans;
            }
        }
    }
    cout << k;

    return 0;
}
