#include <iostream>
#include<queue>

using namespace std;
int sum = 0;

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

node *build(){
    int d;
    cin>>d;
    queue<node *> q;
    node *root=new node(d);
    q.push(root);
    int d1,d2;
    while(!q.empty()){
        node *f=q.front();
        q.pop();
        cin>>d1>>d2;
        if(d1!=-1){
            f->left=new node(d1);
            q.push(f->left);
        }
        if(d2!=-1){
            f->right=new node(d2);
            q.push(f->right);
        }
    }
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

void leftView(node *root, int &max, int curr){
    if(root==NULL){
        return;
    }

    if(max<curr){
        cout<<root->data<<" ";
        max=curr;
    }

    leftView(root->left, max, curr+1);
    leftView(root->right, max, curr+1);
}

int main(){
    node *root=build();
    int max=-1;

    //printPre(root);
    leftView(root, max, 0);

    return 0;
}