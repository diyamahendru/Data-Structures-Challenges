#include<iostream>
#include<stack>

using namespace std;

void stocks(int a[], int n, int *span){
    stack<int> s;
    s.push(0);
    span[0]=1;

    for(int i=1; i<=n-1; i++){
        int temp=a[i];

        while(!s.empty() and a[s.top()]<=temp){
            s.pop();
        }

        if(!s.empty()){
            int prev=s.top();
            span[i] = i-prev;
        }
        else{
            span[i]=i+1;
        }

        s.push(i);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int span[n];
    stocks(a, n, span);

    for(int i=0; i<n; i++){
        cout<<span[i]<<" ";
    }
    cout<<"END"<<endl;


    return 0;
}