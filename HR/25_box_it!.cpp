#include <iostream>

using namespace std;

class Box
{
    int l;
    int b;
    int h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int le, int bre, int hi)
    {
        l = le;
        b = bre;
        h = hi;
    }
    Box(Box &bo)
    {
        l = bo.l;
        b = bo.b;
        h = bo.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    bool operator<(Box &bo)
    {
        if (l < bo.l)
        {
            return true;
        }
        else if (b < bo.b && l == bo.l)
        {
            return true;
        }
        else if (h < bo.h && b == bo.b && l == bo.l)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &out, Box &b)
    {
        out << b.l << " " << b.b << " " << b.h;
        return out;
    }
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}