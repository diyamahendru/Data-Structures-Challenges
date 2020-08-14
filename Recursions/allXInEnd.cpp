#include<iostream>

using namespace std;

void move(char *in, int i){
    if(in[i] == '\0'){
        return;
    }

    if(in[i] == 'x'){
        int j = i;
        while(in[j+1] != '\0'){
            in[j] = in[j+1];
            j++;
        }
        in[j] = 'x';
        move(in, i+1);
    }
    else
        move(in, i+1);
}

int main(){

    char in[1000];
    cin>>in;
    
    move(in, 0);
    cout<<in;

    return 0;
}