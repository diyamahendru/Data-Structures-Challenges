#include<iostream>

using namespace std;

bool safe(int a[][11], int n, int i, int j){
    for(int row=0; row<i; row++){
        if(a[row][j] == 1){
            return false;
        }
    }

    int x=i;
    int y=j;

    while(x>=0 && y>=0){
        if(a[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }

    x=i;
    y=j;

    while(x>=0 && y<n){
        if(a[x][y] == 1){
        return false;
    }
    x--;
    y++;
}

    return true;
}

bool solveIt(int a[][11], int n, int i){
    if(i == n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 1)
                    cout<<"Q ";
                else
                    cout<<"_ ";
            }
            cout<<endl;
        }
        return true;
    }

    for(int j=0; j<n; j++){
        if(safe(a, n, i, j)){
            a[i][j] = 1;
            bool possible = solveIt(a, n, i+1);
            if(possible){
                return true;
            }
            a[i][j] = 0; //Back trtack
        }
    }

    return false;
}

int main(){

    int n;
    cin>>n;
    int a[11][11] = {0};

    solveIt(a, n, 0);

    return 0;
}