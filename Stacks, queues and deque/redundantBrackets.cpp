#include <iostream>
#include <stack>

using namespace std;

bool findRedundancy(char str[])
{
    stack<char> s;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ')')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (s.top() == '(')
            {
                return false;
            }
            else
            {
                while (s.top() != '(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        char str[100];
        cin >> str;
        if (findRedundancy(str))
        {
            cout << "Not Duplicates" << endl;
        }
        else
        {
            cout << "Duplicates" << endl;
        }
    }

    return 0;
}
