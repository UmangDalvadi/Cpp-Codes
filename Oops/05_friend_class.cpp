#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class complex;

class calc
{
public:
    int sumreal(complex, complex);
    int sumcomp(complex, complex);
};

class complex
{
    int a;
    int b;

    
    // friend int calc::sumreal(complex, complex);
    // friend int calc::sumcomp(complex, complex);

    friend class calc;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << a << " + " << b << "i"
             << "\n";
    }
};

int calc::sumreal(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calc::sumcomp(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{

    complex ob[2];
    int x, y;
    for (int i = 0; i < 2; i++)
    {
        cin >> x >> y;
        ob[i].set(x, y);
    }
    for (int i = 0; i < 2; i++)
    {
        ob[i].get();
    }

    calc ob3;
    int s = ob3.sumreal(ob[0], ob[1]);
    cout << "sum real :" << s << "\n";
    s = ob3.sumcomp(ob[0], ob[1]);
    cout << "sum comp :" << s;

    return 0;
}