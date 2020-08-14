#include<iostream>
#include<string>
#include<set>

using namespace std;

void generate(char *in, int i, set<string> &s){
    if(in[i] == '\0'){
        string t(in);
        s.insert(t);
        return;
    }
    for(int j=i; in[j] != '\0'; j++){
        //Going down
        swap(in[i], in[j]);
        //Recursion
        generate(in, i+1, s);
        //Back-track
        swap(in[i], in[j]);
    }
}

int main(){
    char in[10];
    cin>>in;

    set<string> s;
    generate(in, 0, s);

    for(auto str:s){
        if(str>in)
            cout<<str<<endl;
    }

    return 0;
}