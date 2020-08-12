#include<iostream>

using namespace std;

void indices(int *in, int n, int i, int key){
    if(i >= n){
        return;
    }
    if(in[i] == key){
        cout<<i<<" ";
    }
    indices(in, n, i+1, key);
    return;
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;

    indices(arr, n, 0, m);
    
    return 0;
}