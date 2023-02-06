#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace std;

class simplecalc
{
    float a, b;

public:
    void set_simplecalc(float x, float y)
    {
        a = x;
        b = y;
    }
    void display_simplecalc()
    {
        cout << "a + b : " << a + b << endl
             << "a - b : " << a - b << endl
             << "a * b : " << a * b << endl
             << "a / b : " << a / b << endl;
    }
};

class scintificcalc
{
    float a, b;

public:
    void set_scientificcalc(float x, float y)
    {
        a = x;
        b = y;
    }
    void display_scientificcalc()
    {
        cout << "pow(" << a << ", " << b << " ) : " << pow(a, b) << endl
             << "log("
             << a
             << ") : " << log10(a) << endl
             << "sqrt(" << b << ") : "
             << sqrt(b)
             << endl
             << "sin(" << b << ") : "
             << sin(b)
             << endl;
    }
};

class hybrid : public simplecalc, public scintificcalc
{
public:
    void display()
    {
        display_simplecalc();
        cout << endl;
        display_scientificcalc();
    }
};

int main()
{

    hybrid operations;
    operations.set_simplecalc(8, 9);
    operations.set_scientificcalc(2, 4);
    operations.display();

    return 0;
}