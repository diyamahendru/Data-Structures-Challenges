#include<iostream>

using namespace std;

void mapping(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    //1 digit at a time
    int first = in[i] - '0';
    char ch = first + 'A' - 1;
    if(first == 0){
        mapping(in, out, i+1, j);
    }
    else{
        out[j] = ch;
        mapping(in, out, i+1, j+1);
    }
    
    //2 digit at a time
    if(in[i+1] != '\0'){
        int second = in[i+1] - '0';
        int num = first*10 + second;
        if(num<=26){
            char ch = num + 'A' - 1;
            out[j] = ch;
            mapping(in, out, i+2, j+1);
        }
    }
    return;
}

int main(){
    char in[1000];
    cin>>in;

    char out[1000];
    mapping(in, out, 0, 0);

    return 0;
}