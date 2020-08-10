#include<iostream>

using namespace std;

int findLastElement(int a[], int n, int key){
    if(n == 0){
        return -1;
    }

    int i = findLastElement(a+1, n-1, key);
    if(i==-1){
        if(a[0] == key)
            return 0;
        else
            return -1;
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int m;
    cin>>m;

    cout<<findLastElement(a, n, m)<<endl;

    return 0;
}