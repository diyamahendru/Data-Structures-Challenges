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

void atOddK(node *root, int k)
{

    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }

    atOddK(root->left, k - 1);
    atOddK(root->right, k - 1);
}

void atEvenK(node *root, int k)
{

    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }

    atEvenK(root->right, k - 1);
    atEvenK(root->left, k - 1);
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ls = height(root->left);
    int rs = height(root->right);
    return max(rs, ls) + 1;
}

int main()
{
    node *root = build(true);
    int h = height(root);
    //cout << h << endl;

    for (int i = 1; i <= h; i++)
    {
        if (i % 2 == 1)
        {
            atOddK(root, i);
        }
        else
        {
            atEvenK(root, i);
        }
    }

    return 0;
}