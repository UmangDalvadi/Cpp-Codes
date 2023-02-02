#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class student
{
    int score[5];
    static int s[100];
    int max;
    int count = 0;

public:
    void input(int n)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> score[i];
            s[n] = s[n] + score[i];
        }
        // for (int i = 0; i < 5; i++)
        // {
        // }
    }
    void comp(int n)
    {
        max = s[0];
        for (int i = 1; i < n; i++)
        {
            // cout << "s no." << s[i] << endl;
            if (max < s[i])
            {
                // cout << "s no." << s[i] << endl;

                count++;
            }
        }
        cout << count;
    }
};

int student::s[100];

int main()
{
    int n;
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input(i);
        // s[i].sum();
    }
    s[0].comp(n);

    return 0;
}