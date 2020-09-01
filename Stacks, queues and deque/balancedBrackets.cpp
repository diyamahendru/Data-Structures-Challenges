//Using another stack

#include <iostream>
#include <stack>

using namespace std;

bool valid(char *s)
{
    stack<char> stk;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' or ch == '{' or ch == '[')
        {
            stk.push(ch);
        }
        else if (ch == ')')
        {
            if (stk.top() != '(' or stk.empty())
            {
                return false;
            }
            stk.pop();
        }
        else if (ch == '}')
        {
            if (stk.top() != '{' or stk.empty())
            {
                return false;
            }
            stk.pop();
        }
        else if (ch == ']')
        {
            if (stk.top() != '[' or stk.empty())
            {
                return false;
            }
            stk.pop();
        }
    }
    if(stk.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{

    char s[100];
    cin>>s;

    if (valid(s)==true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}