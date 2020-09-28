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

node *build(int *pre, int *in, int s, int e)
{
    static int i = 0;
    if (s > e)
    {
        return NULL;
    }
    node *root = new node(pre[i]);

    int index = -1;
    for (int j = s; s <= e; j++)
    {
        if (in[j] == pre[i])
        {
            index = j;
            break;
        }
    }
    i++;
    root->left = build(pre, in, s, index - 1);
    root->right = build(pre, in, index + 1, e);
    return root;
}

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

void displayBT(node *root)
{
    if (root == NULL)
    {
        return;
    }
    node *ln = root->left;
    node *rn = root->right;
    if (ln == NULL)
    {
        cout << "END => ";
    }
    else
    {
        cout << ln->data << " => ";
    }
    cout << root->data;
    if (rn == NULL)
    {
        cout << " <= END" << endl;
    }
    else
    {
        cout << " <= " << rn->data << endl;
    }
    displayBT(root->left);
    displayBT(root->right);
}

int main()
{

    int n, m;
    cin >> n;
    int pre[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    cin >> m;
    int in[3] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> in[i];
    }

    node *root = build(pre, in, 0, n - 1);
    displayBT(root);

    return 0;
}