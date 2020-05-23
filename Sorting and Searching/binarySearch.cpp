#include<iostream>

using namespace std;

int binary_search(int a[], int n, int key){
    int s, e, mid;
    s = 0;
    e = n-1;
    while(s<e){
        mid = (s+e)/2;
        if(a[mid]==key)
            return mid;
        else if (key > a[mid])
            s = mid+1;
        else
            e = mid-1;
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int key;
    cin>>key;

    int idx;
    idx = binary_search(a, n, key);
    cout<<idx<<endl;

    return 0;
}