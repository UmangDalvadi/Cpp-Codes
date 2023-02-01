#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace std;

class point
{
    int x, y;

public:
    point(int, int);
    friend void display(point, int);
    friend void displaydis(point, point);
};

point::point(int a, int b)
{
    x = a;
    y = b;
}

void display(point a, int n)
{
    cout << "point " << n << " : "
         << "( " << a.x << ", " << a.y << " )"
         << "\n";
}

void displaydis(point a, point b)
{
    int i = sqrt((pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));
    cout << "distance between ( " << a.x << ", " << a.y << " ) "
         << "and"
         << " ( " << b.x << ", " << b.y << " ) "
         << "is"
         << " : " << i << endl;
}

int main()
{
    point a(1, 0);
    display(a, 1);
    point b = point(10, 0);
    display(b, 2);
    displaydis(a, b);

    return 0;
}