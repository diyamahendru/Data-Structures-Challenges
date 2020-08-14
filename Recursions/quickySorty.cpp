#include<iostream>

using namespace std;

int partition(int *a, int f, int l){
    int j = f;
    int i = f-1;

    int pivot = a[l];
    for( ; j<=l-1; ){
        if(a[j]<pivot){
            i = i+1;
            swap(a[i], a[j]);
        }
        j = j+1;
    }
    swap(a[i+1], a[l]);
    return i+1;
}

void quicky(int *a, int f, int l){
    if(f>=l)
        return;
    
    int pp = partition(a, f, l);
    quicky(a, f, pp-1);
    quicky(a, pp+1, l);
}

int main(){
    int n;
    cin>>n; 

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    quicky(a, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}