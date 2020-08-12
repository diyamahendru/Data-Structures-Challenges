#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

void sub(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<" ";
        return;
    }

    //exclude the current char 
    sub(in, out, i+1, j);
    
    //include the current char
    out[j] = in[i];
    sub(in, out, i+1, j+1);

}

int main(){
    char in[1000];
    cin>>in;
    int l = strlen(in);

    char out[1000];
    sub(in, out, 0, 0);
    int num = pow(2, l);
    cout<<endl<<num;

    return 0;
}