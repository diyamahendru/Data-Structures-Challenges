#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;

    int l;
    l = s.length();

    for(int i=0; i<l; i++){
        cout<<s[i];
        if(i==l-1)
            break;
        else
            cout<<s[i+1]-s[i];
    }

    return 0;
}