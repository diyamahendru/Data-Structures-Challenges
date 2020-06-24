#include<iostream>

using namespace std;

bool isPalindrome(int arr[], int i, int n){
    int j = n-i-1;
    bool flag;
    if(arr[i]==arr[j]){
        i++;
        flag = isPalindrome(arr, i, n);
    }
    else
        return false;
    
    return true;
}

int main(){
    bool flag = true;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    flag = isPalindrome(arr, 0, n);

    if(flag){
        cout<<"True";
    }
    else
        cout<<"False";
    return 0;
}