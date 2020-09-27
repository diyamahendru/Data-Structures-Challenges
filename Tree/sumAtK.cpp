#include <iostream>

using namespace std;
int sum = 0;

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

node *build()
{
    int d, c;
    cin >> d >> c;

    node *root = new node(d);
    if (c == 2)
    {
        root->left = build();
        root->right = build();
        return root;
    }
    if (c == 1)
    {
        root->left = build();
        return root;
    }
    if (c == 0)
    {
        return root;
    }
    return NULL;
}

void sumK(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        sum = sum + root->data;
        return;
    }

    sumK(root->left, k - 1);
    sumK(root->right, k - 1);
}

void printIn(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}

int main()
{

    node *root = build();
    int k;
    cin >> k;

    sumK(root, k);
    cout << sum << endl;
    //printIn(root);

    return 0;
}