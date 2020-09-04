#include <iostream>
#include <stack>

using namespace std;

class QStack
{

    stack<int> p;
    stack<int> s;

public:
    bool empty()
    {
        return p.size() == 0;
    }

    void enqueue(int d)
    {
        p.push(d);
    }

    void dequeue(int n)
    {
        while (p.size() > 0)
        {
            int temp = p.top();
            p.pop();
            s.push(temp);
        }
        while (s.size() > 0)
        {
            cout << s.top() << " ";
            s.pop();
        }
    }
};

int main()
{

    int n;
    cin >> n;

    QStack q;

    for (int i = 0; i <= n - 1; i++)
    {
        q.enqueue(i);
    }

    q.dequeue(n);

    return 0;
}