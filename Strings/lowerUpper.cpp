#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    if(s[0]>=65 && s[0]<=90)
        cout<<"UPPERCASE";
    else if (s[0]>=97 && s[0]<122)
        cout<<"LOWERCASE";
    else
        cout<<"Invalid";

    return 0;
}