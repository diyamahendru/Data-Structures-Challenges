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

int main()
{

    int n, a;
    cin >> n;
    node *even = NULL;
    node *odd = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
            insertAtTail(even, a);
        else
            insertAtTail(odd, a);
    }

    print(odd);
    print(even);

    return 0;
}