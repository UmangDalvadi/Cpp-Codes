#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class temp
{
    static int count;
    // count=0;
public:
    // count = 0;
    temp()
    {
        count++;
        cout << "construct ob " << count << endl;
    }

    ~temp()
    {
        cout << "distruct ob " << count << endl;
        count--;
    }
};

int temp::count=100; //default value 0 // it initialized with class, not a class member

int main()
{
    temp t1;

    {
        temp t2;
        temp t3;
    }

    return 0;
}