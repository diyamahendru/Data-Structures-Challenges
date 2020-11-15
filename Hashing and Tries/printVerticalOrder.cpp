#include <iostream>
#include <queue>
#include <vector>
#include <map>

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
        left = right = NULL;
    }
};

node *build()
{
    int d;
    cin >> d;
    queue<node *> q;
    node *root = new node(d);
    q.push(root);
    int d1, d2;
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        cin >> d1 >> d2;
        if (d1 != -1)
        {
            f->left = new node(d1);
            q.push(f->left);
        }
        if (d2 != -1)
        {
            f->right = new node(d2);
            q.push(f->right);
        }
    }
    return root;
}

void printVOrder(node *root, int d, map<int, vector<int>> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[d].push_back(root->data);
    printVOrder(root->left, d - 1, m);
    printVOrder(root->right, d + 1, m);
    return;
}

int main()
{
    int n;
    cin>>n;
    node *root = build();
    map<int, vector<int>> m;
    printVOrder(root, 0, m);

    for (auto x : m)
    {
        for (int y : x.second)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    //4 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1

    return 0;
}