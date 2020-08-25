#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtTail(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }

    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(d);
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *merge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }

    if (b == NULL)
    {
        return a;
    }

    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }

    return c;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        node *head1 = NULL;
        node *head2 = NULL;
        cin >> n1;
        long long int a;
        for (int i = 0; i < n1; i++)
        {
            cin >> a;
            insertAtTail(head1, a);
        }
        cin >> n2;
        for (int i = 0; i < n2; i++)
        {
            cin >> a;
            insertAtTail(head2, a);
        }
        node *newHead = merge(head1, head2);
        print(newHead);
        cout << endl;
    }

    return 0;
}