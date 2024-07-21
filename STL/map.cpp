#include <iostream>
#include <map>
using namespace std;

// key-value pairs

int main()
{
    map<int, string> m;

    m[1] = "umang";
    m[7] = "vikash";
    m[2] = "keval";

    cout << "---------------------------" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.insert({3, "dhruv"});

    cout << "---------------------------" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "---------------------------" << endl;
    cout << "find 7 : " << m.count(7) << endl;

    cout << "---------------------------" << endl;
    m.erase(7);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    //m.find(7)

    return 0;
}
