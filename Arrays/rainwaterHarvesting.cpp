//The problem statement was that the height of each building was given in an array.
//When the rain water gets collected, we need to calculate the units of water that can be harvested.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int calculateBlocks(int arr[], int n){
    int l[n], r[n], water=0;
    l[0] = arr[0];
    for(int i=1; i<n; i++){
        l[i] = max(l[i-1], arr[i]);
    }
    r[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        r[i] = max(r[i+1], arr[i]);
    }

    for(int i=0; i<n; i++){
        water += min(l[i], r[i]) - arr[i];
    }
    return water;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<calculateBlocks(arr, n);

    return 0;
}