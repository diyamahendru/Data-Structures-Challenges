#include<iostream>

using namespace std;

void wavePrint(int a[10][10],int r, int c){
    for(int j=0; j<c; j++){
        if(j%2==0){
            for(int i=0; i<r; i++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int i=r-1; i>=0; i--)
                cout<<a[i][j]<<", ";
            }
    }
	cout<<"END";
}

int main(){
    int a[10][10];
    int c,r;
    cin>>r>>c;

    for(int p=0; p<r; p++){
        for(int q=0; q<c; q++)
            cin>>a[p][q];
    }
    wavePrint(a, r, c);


    return 0;
}