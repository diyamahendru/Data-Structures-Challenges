#include<iostream>
#include<cmath>

using namespace std;

bool isPossible(int a[][9], int i, int j, int n, int no){
    //For row and column
    for(int x=0; x<n; x++){
        if(a[i][x] == no || a[x][j] == no)
            return false;
    }
    int r = sqrt(n);
    int sx = (i/r)*r;
    int sy = (j/r)*r;
    for(int x=sx; x<sx+r; x++){
        for(int y=sy; y<sy+r; y++){
            if(a[x][y] == no){
                return false;
            }
        }
    }

    return true;
}

bool solveIt(int a[][9], int i, int j, int n){
    if(i == n){
        for(int k=0; k<n; k++){
            for(int l=0; l<n; l++){
                cout<<a[k][l]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j == n){
        return solveIt(a, i+1, 0, n);
    }

    if(a[i][j] != 0){
        return solveIt(a, i, j+1, n);
    }

    for(int no=1; no<=9; no++){
        if(isPossible(a, i, j, n, no)){
            a[i][j] = no;
            bool solved = solveIt(a, i, j+1, n);
            if(solved == true){
                return true;
            }
        }
    }
    //BackTrack
    a[i][j] = 0;
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[9][9] = {0};
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++)
            cin>>arr[i][j];
    }

    if(solveIt(arr, 0, 0, n) == false)
        cout<<"No solution"<<endl;

    return 0;
}