#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "element " << i << ": " << arr[i] << endl;
    }

    cout << "char at 2 :" << arr.at(2) << endl;
    cout << "front :" << arr.front() << endl;
    cout << "end :" << arr.back() << endl;
}