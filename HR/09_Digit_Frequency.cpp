#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    // cout << s.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == i + 48)
            {
                // cout << i << ":" << s[j] << " ";
                count++;
            }
        }
        // cout << endl;
        cout << count << " ";
        count = 0;
    }
}