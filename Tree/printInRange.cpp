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

node *insertBST(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }

    if (data <= root->data)
    {
        root->left = insertBST(root->left, data);
    }
    else
    {
        root->right = insertBST(root->right, data);
    }
    return root;
}

node *build()
{
    int n;
    cin >> n;

    int d;
    node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> d;
        root = insertBST(root, d);
    }
    return root;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, k1, k2);
    if (root->data <= k2 && root->data >= k1)
    {
        cout << root->data << " ";
    }
    inorder(root->right, k1, k2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        node *root = build();
        int k1, k2;
        cin >> k1 >> k2;
        cout << "# Preorder : ";
        preorder(root);
        cout << endl << "# Nodes within range are : ";
        inorder(root, k1, k2);
        cout<<endl;
    }
    return 0;
}