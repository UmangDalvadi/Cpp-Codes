#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class base
{
    int d1;

public:
    int d2;
    // base() {}
    void setd(int da1, int da2)
    {
        d1 = da1;
        d2 = da2;
    }
    int getd1()
    {
        return d1;
    }
    int getd2()
    {
        return d2;
    }
};

class pro : public base
{
    int d3;

public:
    void proc()
    {
        d3 = d2 * getd1();
    }
    void display()
    {
        cout << "d1 : " << getd1() << endl
             << "d2 : " << d2 << endl
             << "d3 : " << d3 << endl;
    }
};

int main()
{
    pro p1;
    p1.setd(10, 20);
    p1.proc();
    p1.display();
    return 0;
}