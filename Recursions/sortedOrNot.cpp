#include<iostream>

using namespace std;

bool sorted(int a[], int n, int i){
    if(i == n-1){
        return true;
    }
    bool flag = false;
    if(a[i]<=a[i+1]){
        flag = sorted(a, n, i+1);
    }
    else{
        flag = false;
        return flag;
    }
    return flag;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bool ans;
    ans = sorted(a, n, 0);
    if(ans){
        cout<<"True"<<endl;
    }
    else
        cout<<"False";

    return 0;
}