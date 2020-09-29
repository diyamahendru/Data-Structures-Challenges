#include <iostream>
#include <queue>

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

node *insert(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }

    if (d <= root->data)
    {
        root->left = insert(root->left, d);
    }
    else
    {
        root->right = insert(root->right, d);
    }
    return root;
}

node *build()
{
    int n;
    cin >> n;
    node *root = NULL;
    int d;

    for (int i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }

    return root;
}

node *del(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        root->left = del(root->left, data);
        return root;
    }
    else if (data == root->data)
    {
        //0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // Only 1 child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        //2 children
        node *replace = root->right;
        while (replace->left != NULL)
        {
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = del(root->right, replace->data);
        return root;
    }
    else
    {
        root->right = del(root->right, data);
        return root;
    }
}

void printPre(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPre(root->left);
    printPre(root->right);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        node *root = build();
        int n;
        cin >> n;
        int dele;
        for (int i = 0; i < n; i++)
        {
            cin >> dele;
            root = del(root, dele);
        }
        printPre(root);
        cout << endl;
    }

    return 0;
}