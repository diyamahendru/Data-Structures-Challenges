#include <iostream>
#include <cstring>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};

node *build(bool flag)
{
    if (flag)
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l, r;
        cin >> l;
        if (l == "true")
        {
            root->left = build(true);
        }
        cin >> r;
        if (r == "true")
        {
            root->right = build(true);
        }
        return root;
    }
}

bool identical(node *r1, node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 != NULL && r2 != NULL)
    {
        bool l = identical(r1->left, r2->left);
        bool r = identical(r1->right, r2->right);
        return (l && r);
    }
    return false;
}

int main()
{

    node *r1 = build(true);
    node *r2 = build(true);
    bool ans = identical(r1, r2);
    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}