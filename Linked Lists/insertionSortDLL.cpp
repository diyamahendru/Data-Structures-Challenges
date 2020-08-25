#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
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
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void insertionSort(node *&head, int n)
{
    node *end = head->next;
    while (end != NULL)
    {
        node *temp = head;
        while (temp != end)
        {
            if (end->data <= temp->data)
            {
                int t = temp->data;
                temp->data = end->data;
                end->data = t;
            }
            else
            {
                temp = temp->next;
            }
        }
        end = end->next;
    }
}

int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        insertAtTail(head, a);
    }

    insertionSort(head, n);

    print(head);

    return 0;
}