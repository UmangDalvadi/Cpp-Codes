#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // max priority
    priority_queue<int> max;

    max.push(23);
    max.push(456);
    max.push(5);
    max.push(85);

    cout << "max priority queue :" << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    // min priority
    priority_queue<int, vector<int>, greater<int>> min;

    min.push(23);
    min.push(456);
    min.push(5);
    min.push(85);

    cout << "min priority queue :" << endl;
    n = min.size();
    for (int i = 0; i < n; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;

    return 0;
}