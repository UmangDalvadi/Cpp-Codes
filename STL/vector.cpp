#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    vector<int> vecWithSize(5);
    cout << vecWithSize[1] << endl;

    vector<int> copyVec(vecWithSize);
    cout << copyVec[1] << endl;

    cout << "capacity : " << vec.capacity() << endl;
    cout << "size : " << vec.size() << endl;

    vec.push_back(24);
    vec.push_back(04);
    vec.push_back(2004);

    //--------------------------------------------------

    vector<int>::iterator it = vec.begin();

    while (it != vec.end())
    {
        cout << (*it) << " ";
        it++;
    }
    cout << endl;

    //-------------------------------------------------

    cout << "Front : " << vec.front() << endl;
    cout << "back : " << vec.back() << endl;
    cout << "at 1st : " << vec.at(1) << endl;

    cout << "push, capacity : " << vec.capacity() << endl;
    cout << "push, size : " << vec.size() << endl;

    vec.pop_back();

    cout << "pop, capacity : " << vec.capacity() << endl;
    cout << "pop, size : " << vec.size() << endl;

    vec.clear();

    cout << "clear, capacity : " << vec.capacity() << endl;
    cout << "clear, size : " << vec.size() << endl;

    return 0;
};
