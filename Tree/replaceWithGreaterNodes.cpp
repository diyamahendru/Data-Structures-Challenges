#include <iostream>
#include <queue>

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

node *build(int a[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = build(a, s, mid - 1);
    root->right = build(a, mid + 1, e);
    return root;
}

void printPre(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}

int main(){
    int n;
    cin>>n;
    int in[n];
    for(int i=0; i<n; i++){
        cin>>in[i];
    }
    for(int j=n-1; j>=0; j--){
        in[j-1]=in[j-1]+in[j];
    }
    node *root= build(in,0,n-1);
    printPre(root);

    return 0;
}