#include<iostream>

using namespace std;

void formating(char a[], int i){
    if(a[i] == '\0')
        return;
    if(a[i] == a[i+1]){
        cout<<a[i]<<"*"<<a[i];
        formating(a, i+2);
    }
    else{
        cout<<a[i];
        formating(a, i+1);
    }

}

int main(){

    char a[1000];
    cin>>a;
    formating(a, 0);
    return 0;
}