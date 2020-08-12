#include<iostream>

using namespace std;

void replace(char *a, int i){
    if(a[i] == '\0' || a[i+1] == '\0')
        return;
    if(a[i] == 'p' && a[i+1] == 'i'){
        int j = i+2;
        while(a[j] != '\0')
            j++;
        while(j >= i){
            a[j+2] = a[j];
            j--;
        }
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';
        replace(a, i+4);
    }
    else
        replace(a, i+1);
    return;
}

int main(){
    int n;
    cin>>n;

    while(n--){
        char a[1000];
        cin>>a;
        replace(a, 0);
        cout<<a<<endl;
    }

    return 0;
}