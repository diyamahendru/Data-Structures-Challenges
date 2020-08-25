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

node *kReverse(node *head, int k)
{
    node *c = head;
    node *p = NULL;
    node *n = NULL;
    int cnt = 1;
    while (cnt <= k && c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
        cnt++;
    }
    if (c != NULL)
    {
        head->next = kReverse(c, k);
    }

    return p;
}

int main()
{

    int n, k, a;
    cin >> n >> k;
    node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        insertAtTail(head, a);
    }

    node *newHead = kReverse(head, k);
    print(newHead);

    return 0;
}