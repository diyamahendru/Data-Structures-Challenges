#include<iostream>

using namespace std;
int cnt = 0;
char codes[][5] = { " ", "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wx" , "yz"};

void generate(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<" ";
        cnt++;
        return;
    }
    int num = in[i] - '0';
    if(num == 0){
        out[j] = ' ';
        generate(in, out, i+1, j+1);
    }
    else{
        for(int r=0; codes[num][r] != '\0'; r++){
            out[j] = codes[num][r];
            generate(in, out, i+1, j+1);
        }
    }

}

int main(){
    char in[1000];
    cin>>in;

    char out[1000];
    generate(in, out, 0, 0);
    cout<<endl<<cnt;

    return 0;
}