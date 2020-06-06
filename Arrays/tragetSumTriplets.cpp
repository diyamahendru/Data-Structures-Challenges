#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void targetSumtriplets(int arr[], int n, int target){
    for(int i=0; i<n-1; i++){
        int a = arr[i];
        int *b, *c;
        b = &arr[i+1];
        c = &arr[n-1];
        while(*b<*c){
            if(a+*b+*c == target){
                cout<<a<<", "<<*b<<" and "<<*c<<endl;
                b++;
                c--;
            }
            else if(a+*b+*c>target)
                c--;
            else
                b++;
        }
    }
}

int main(){
    int N;
    cin>>N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);

    int target;
    cin>>target;

    targetSumtriplets(arr, N, target);

    return 0;

}