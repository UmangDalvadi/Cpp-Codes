#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(10);
    d.push_back(26);
    d.push_back(9);
    d.push_front(36);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "at 1: " << d.at(1) << endl;

    cout << "is empty? : " << d.empty() << endl;

    cout << "before erase : " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "after erase : " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}

// list is same as deque

//stack
    // s.push
    // s.pop
    // s.top
    // s.size
    // s.empty

//queue
    // q.push
    // q.size
    // q.front
    // q.pop

