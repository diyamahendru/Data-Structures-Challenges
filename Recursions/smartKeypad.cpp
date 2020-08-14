#include<iostream>

using namespace std;

char pad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void smartypants(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    int num = in[i] - '0';
    if(num == 0){
        out[j] = ' ';
        smartypants(in, out, i+1, j+1);
    }
    else{
        for(int r=0; pad[num][r] != '\0'; r++){
            out[j] = pad[num][r];
            smartypants(in, out, i+1, j+1);
        }
    }
}

int main(){
    char in[10];
    cin>>in;

    char out[10];
    smartypants(in, out, 0, 0);

    return 0;
}