#include <iostream>
#include <stack>

using namespace std;

int main()
{

    int q;
    cin >> q;
    stack<int> s;

    while (q--)
    {
        int code;
        cin >> code;
        if (code == 2)
        {
            int p;
            cin >> p;
            s.push(p);
        }
        else
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
            {
                cout << "No Code" << endl;
            }
        }
    }

    return 0;
}