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

node *takeInput()
{
    int d;
    cin >> d;
    node *head = NULL;

    while (d != -1)
    {
        insertAtTail(head, d);
        cin >> d;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os; //cout
}

istream &operator>>(istream &is, node *&head)
{
    head = takeInput();
    return is;
}

node *kth(node *head, int k)
{
    node *slow = head;
    node *fast = head;

    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{

    node *head;
    cin >> head;
    int k;
    cin >> k;

    node *temp = kth(head, k);
    cout << temp->data << endl;

    return 0;
}