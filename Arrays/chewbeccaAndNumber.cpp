#include<iostream>

using namespace std;

int main(){
    char ip[18];
    cin>>ip;
    for(int i=0; i<18; i++){
        if(i==0){
            switch(ip[i]){
                case '5':
                    ip[i]='4';
                    break;
                case '6':
                    ip[i]='3';
                    break;
                case '7':
                    ip[i]='2';
                    break;
                case '8':
                    ip[i]='1';
                    break;
            }
        }
        else{
            switch(ip[i]){
                case '5':
                    ip[i]='4';
                    break;
                case '6':
                    ip[i]='3';
                    break;
                case '7':
                    ip[i]='2';
                    break;
                case '8':
                    ip[i]='1';
                    break;
                case '9':
                    ip[i]='0';
                    break;
            }
        }
            cout<<ip[i];
    }

    return 0;
}
