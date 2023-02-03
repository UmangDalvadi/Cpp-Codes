#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class emp
{
public:
    int id;
    // string name;
    float salary;
    emp() {}
    emp(int x, float yralas)
    {
        id = x;
        // name = eman;
        salary = yralas;
    }
    void display()
    {
        cout << id << ", " << salary << endl;
    }
};

class programmer : emp
{
    string n;

public:
    programmer(int d, string name)
    {
        n = name;
        id = d;
        cout << "id : " << id << ", "
             << "name : " << n << endl;
        //  << "salary : " << salary << endl;
    }
};

int main()
{
    emp e1(1, 4.5), e2(2, 3.2), e3(3, 5);
    e1.display();
    e2.display();
    e3.display();

    // string x=;
    programmer p1(10, "umang"), p2(11, "keval");
    // cout << p1.id ;

    return 0;
}