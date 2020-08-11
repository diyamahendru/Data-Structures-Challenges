#include<iostream>

using namespace std;

void remove(char *s, char *ss, int i, int j){
    if(s[i] == '\0'){
        ss[j] = '\0';
        return;
    }
    if(s[i] == s[i+1]){
        while(s[i] == s[i+1]){
            ss[j] = s[i];
            i++;
        }
        remove(s, ss, i+1, j+1);
    }
    else{
        ss[j] = s[i];
        remove(s, ss, i+1, j+1);
    }

}

int main(){

    char s[1000];
    cin>>s;
    char ss[1000];

    remove(s, ss, 0, 0);
    cout<<ss<<endl;

    return 0;
}