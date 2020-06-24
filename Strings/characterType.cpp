#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    if(isupper(s[0]))
        cout<<"U";
    else if (islower(s[0]))
        cout<<"L";
    else
        cout<<"I";

    return 0;
}