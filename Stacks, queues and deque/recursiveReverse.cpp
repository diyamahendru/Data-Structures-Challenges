//Using recursions

#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int a)
{
    if (s.empty())
    {
        s.push(a);
        return;
    }

    int data = s.top();
    s.pop();
    insertAtBottom(s, a);
    s.push(data);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    //The top element is removed and inserted at the bottom of the smaller reversed stack.
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, x);
}

int main()
{

    int n;
    cin>>n;
    stack<int> s;
    for (int i = 0; i <= n-1; i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}