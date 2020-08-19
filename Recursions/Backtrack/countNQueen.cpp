#include<iostream>

using namespace std;
int cnt = 0;

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
        cnt++;
        return false;
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
    cout<<cnt;
    
    return 0;
}