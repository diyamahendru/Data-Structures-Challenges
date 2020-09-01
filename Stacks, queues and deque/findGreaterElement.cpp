#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<int> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        q.push(temp);
    }

    int t1, t2, front;
    if (!q.empty())
    {
        t1 = q.front();
        front = t1;
        q.pop();
    }
    while (!q.empty())
    {
        t2 = q.front();
        if (t2 > t1)
        {
            cout << t2 << " ";
            t1 = t2;
            q.pop();
        }
        else
        {
            cout << "-1 ";
            t1 = t2;
            q.pop();
        }
    }
    if (t2 < front)
    {
        cout << front << " ";
    }
    else
    {
        cout << "-1 ";
    }

    return 0;
}