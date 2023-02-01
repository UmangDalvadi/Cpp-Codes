#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sum(complex, complex);
    void get()
    {
        cout << a << " + " << b << "i"
             << "\n";
    }
};

complex sum(complex o1, complex o2)
{
    complex ob3;
    ob3.set((o1.a + o2.a), (o1.b + o2.b));
    // ob3.get();
    return ob3;
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

    complex s=sum(ob[0],ob[1]);
    s.get();

    return 0;
}