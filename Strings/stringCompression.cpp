#include<iostream>
#include<string>

using namespace std;

int main(){

    string s, t;
    cin>>s;

    int l;
    l = s.length();

    for(int i=0; i<l; i++){
        int j=0;
        while(s[i+j] == s[i]){
            j++;
            //cout<<j;
        }
        cout<<s[i]<<j;
        i = i+j-1;
    }
    
    return 0;
}