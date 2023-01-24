#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class complex
{

    int a;
    int b;

public:
    void setdata(int, int);
    void setbyob(complex, complex);
};

void complex::setdata(int d1, int d2)
{
    a = d1;
    b = d2;
    for (int i = 0; i < 2; i++)
    {
        cout << "ob " << i << ": " << a << ", " << b << endl;
    }
}
void complex::setbyob(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    for (int i = 2; i < 4; i++)
    {
        cout << "ob " << i << ": " << a << ", " << b << endl;
    }
}

int main()
{
    complex ob[4];
    for (int i = 0; i < 2; i++)
    {
        ob[i].setdata(1, 2);
        // ob[i]->setdata;
    }
    ob[2].setbyob(ob[0], ob[1]);
    ob[3].setbyob(ob[1], ob[0]);

    return 0;
}