#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // for (int i = 0; i < 2; i++)
    // {
    if (s[8] == 'A')
    {
        // cout << endl;
        // cout << "A" << endl;
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if (s[8] == 'P')
    {
        // cout << endl;
        // cout << "P" << endl;
        if (s[0] == '1' && s[1] == '2')
        {
            // continue;
        }
        else if (!(s[0] == '1' && s[1] == '2'))
        {
            s[0] += 1;
            s[1] += 2;
            // s[1]++;
        }
    }

    string temp;
    for (int i = 0; i < 8; i++)
    {
        temp[i] = s[i];
    }
    for (int i = 0; i < 8; i++)
    {

        cout << temp[i];
    }
}