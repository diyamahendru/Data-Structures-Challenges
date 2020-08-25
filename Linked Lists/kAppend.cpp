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

node *kAppend(node *head, int l, int k)
{   
    if(k==0 || k==l){
        return head;
    }
    if(k>l){
        k=k%l;
    }

    node *temp=head;
    node *newHead;

    for(int i=0; i<l-k-1; i++){
        temp=temp->next;
    }
    newHead = temp->next;
    temp->next=NULL;

    temp=newHead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = head;

    return newHead;
}

int main()
{

    int n, k, a;
    cin >> n;
    node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        insertAtTail(head, a);
    }

    cin>>k;

    node *newHead = kAppend(head, n, k);
    print(newHead);

    return 0;
}