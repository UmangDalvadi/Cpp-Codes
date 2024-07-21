// unique elements
// using BST in behind
// stored in sorted order
// can't modify it- either store or delete

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Is element present or not? :" << s.count(10) << endl;

    return 0;
}