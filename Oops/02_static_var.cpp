#include <iostream>
using namespace std;

class member
{
    int id;
    static int flag;

public:
    void set(void);
    void get(void);
    static void getdt(void);
};

void member::getdt()
{
    cout << "flag is : " << flag << endl;
}

void member::set()
{
    cout << "\nenter id : ";
    cin >> id;
    flag++;
}
void member::get()
{
    cout << "id : " << id << endl
         << "flag : " << flag << endl;
}
int member::flag;

int main()
{
    member umang, vikash, keval;
    umang.set();
    umang.get();
    member::getdt();
    vikash.set();
    vikash.get();
    member::getdt();
    keval.set();
    keval.get();
    member::getdt();
}