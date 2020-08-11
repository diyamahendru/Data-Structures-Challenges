#include<iostream>

using namespace std;

void remove(char s[], int i){
    if(s[i] == '\0')
        return;
    if(s[i] == s[i+1]){
        cout<<s[i];
        remove(s, i+2);
    }
    else{
        cout<<s[i];
        remove(s, i+1);
    }

}

int main(){

    char s[1000];
    cin>>s;
    remove(s, 0);
    return 0;
}