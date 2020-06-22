// Rotate the image 90 degrees anti-clockwise

#include<iostream>

using namespace std;

void rotateArray(int a[][1000], int n){
    //Mirror image
    for(int row=0; row<n; row++){
        int start_col = 0;
        int end_col = n-1;
        while(start_col<end_col){
            swap(a[row][start_col], a[row][end_col]);
            start_col++;
            end_col--;
        }
    }

    //Transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

int main(){
    int a[1000][1000];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    rotateArray(a, n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
		cout<<endl;
    }

    return 0;
}