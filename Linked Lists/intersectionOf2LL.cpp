#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2)
{
    int n1 = length(l1);
    int n2 = length(l2);
    int d;
    if (n1 > n2)
    {
        d = n1 - n2;
        Node *temp1 = l1;
        Node *temp2 = l2;
        while (d--)
        {
            temp1 = temp1->next;
        }
        while (temp1 != NULL)
        {
            if (temp1->next == temp2->next)
            {
                return temp1->next;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
    }
    else
    {
        d = n2 - n1;
        Node *temp1 = l1;
        Node *temp2 = l2;
        while (d--)
        {
            temp2 = temp2->next;
        }
        while (temp1 != NULL)
        {
            if (temp1->next == temp2->next)
            {
                return temp1->next;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
    }
    return NULL;
}

Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);

    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;

    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }

    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);

    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;

    return 0;
}