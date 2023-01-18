#include <iostream>
using namespace std;

class animal
{
private:
    char sound;

public:
    int age;
    void s(char ch);
    void Op();
};

void animal ::s(char ch)
{
    sound = ch;
}
void animal ::Op()
{
    cout << "age : " << age << endl;
    cout << "sound : " << sound << endl;
    // cout << "dog age : " << age << endl;
}
int main()
{
    animal dog, cat;
    // dog.sound = 'b';
    dog.age = 10;
    dog.s('b');
    cat.age = 7;
    cat.s('m');
    cout << "Dog \n";
    dog.Op();
    cout << "\nCat \n";
    cat.Op();
}