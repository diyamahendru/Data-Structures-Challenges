//Ant-clockwise print

#include<iostream>

using namespace std;

void spiralPrint(int a[][10], int r, int c){
    int sr=0, er=r-1, sc=0, ec=c-1;

    while(sr<=er&&sc<=ec){

        for(int i=sr; i<=er; i++){
            cout<<a[i][sc]<<", ";
        }
        sc++;

        for(int j=sc; j<=ec; j++){
            cout<<a[er][j]<<", ";
        }
        er--;

        if(sc<=ec){
            for(int i=er; i>=sr; i--){
            cout<<a[i][ec]<<", ";
            }
            ec--;
        }
        if(er>=sr){
            for(int j=ec; j>=sc; j--){
            cout<<a[sr][j]<<", ";
            }
            sr++;
        }
    }
	cout<<"END";
}


int main(){
    int a[10][10];
    int c,r;
    cin>>r>>c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			cin>>a[i][j];
	}
    spiralPrint(a, r, c);


    return 0;
}