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

bool isPalindrome(node *head, int n)
{
    node *start = head;
    node *end = head;
    while (end->next != NULL)
    {
        end = end->next;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (start->data != end->data)
        {
            return false;
        }
        start = start->next;
        end = end->prev;
    }
    return true;
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

    //print(head);

    bool flag = isPalindrome(head, n);
    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}