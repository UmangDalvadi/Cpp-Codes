
// not optimized for big input

// #include <iostream>
// #include <iomanip>
// #include <string.h>

// using namespace std;

// int main()
// {
//     long long u;
//     cin >> u;
//     int arr[u] = {0};
//     long long n;
//     cin >> n;
//     int q[n][3];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> q[i][j];
//         }
//     }
//     // cout << "q[0][0] : " << q[0][0]<<endl;
//     // cout << "q[0][1] : " << q[0][1]<<endl;
//     // cout << "q[0][2] : " << q[0][2]<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < u; j++)
//         {
//             if (q[i][0] <= j + 1 && q[i][1] >= j + 1)
//             {
//                 arr[j] += q[i][2];
//             }
//         }
//     }
//     // for (int i = 0; i < u; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     long long max = arr[0];
//     for (int i = 0; i < u; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     cout << max;

//     return 0;
// }

// optimized for big input

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    long long u;
    cin >> u;
    int *arr = (int *)malloc((u + 1) * sizeof(int));
    for (int i = 1; i <= u; i++)
    {
        arr[i] = 0;
    }

    long long n;
    cin >> n;
    // int q[n][3];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> q[i][j];
    //     }
    // }
    // cout << "q[0][0] : " << q[0][0]<<endl;
    // cout << "q[0][1] : " << q[0][1]<<endl;
    // cout << "q[0][2] : " << q[0][2]<<endl;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < u; j++)
        // {
        //     if (q[i][0] <= j + 1 && q[i][1] >= j + 1)
        //     {
        //         arr[j] += q[i][2];
        //     }
        // }
        long long a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        if ((b + 1) <= u)
        {
            arr[b + 1] -= k;
        }
    }
    // for (int i = 0; i < u; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    long long max = 0, sum = 0;
    for (int i = 1; i <= u; i++)
    {
        sum += arr[i];
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max;

    return 0;
}