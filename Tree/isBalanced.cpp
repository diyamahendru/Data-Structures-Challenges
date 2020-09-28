#include <iostream>

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
        left = NULL;
        right = NULL;
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
    return NULL;
}

class Pair
{
public:
    int height;
    bool balance;
};

Pair balanced(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.height = 0;
        p.balance = true;
        return p;
    }

    //Recursive case
    Pair left = balanced(root->left);
    Pair right = balanced(root->right);

    p.height = max(left.height, right.height) + 1;
    if (abs(left.height - right.height) <= 1 && left.balance && right.balance)
    {
        p.balance = true;
    }
    else
    {
        p.balance = false;
    }
    return p;
}

int main()
{
    node *root = build(true);
    if (balanced(root).balance)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}