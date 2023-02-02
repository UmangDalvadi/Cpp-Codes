#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class temp
{
    int a;

public:
    temp() { a = 0; }
    temp(int n)
    {
        a = n;
    }

    void display();
};

void temp::display()
{
    cout << a << endl;
}

int main()
{

    temp t1, t2(11), t4;
    t1.display();
    t2.display();
    temp t3(t2);
    t3.display();
    t4 = t3;
    t4.display();

    return 0;
}