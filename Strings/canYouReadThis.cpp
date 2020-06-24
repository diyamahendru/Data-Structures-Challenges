#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;

    int l;
    l = s.length();

    for(int i=0; i<l; i++){
        if(isupper(s[i])){
            cout<<endl;
            cout<<s[i];
        }
        else
            cout<<s[i];
    }
    

    return 0;
}