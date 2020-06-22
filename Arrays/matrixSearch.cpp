#include<iostream>
using namespace std;

int staircaseSearch(int a[][30], int r, int c, int key){
	int flag = 0;
    int i=0, j= c-1;
    while(i<r&&j>=0){
        if(a[i][j]==key){
            flag = 1;
            return flag;
        }
        else if(a[i][j]>key){
            j--;
        }
        else
            i++;
    }
    return flag;
}

int main(){
    int a[30][30];
    int c,r,key;
    cin>>r>>c;

    for(int p=0; p<r; p++){
        for(int q=0; q<c; q++)
            cin>>a[p][q];
    }
    cin>>key;
    cout<<staircaseSearch(a,r,c,key);
    return 0;
}