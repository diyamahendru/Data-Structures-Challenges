#include<iostream>

using namespace std;

bool solveIt(char maze[][1001], int ans[][1001], int i, int j, int r, int c){
    if(i==r && j==c){
        ans[i][j] = 1;
        for(int i=0; i<=r; i++){
            for(int j=0; j<=c; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    if(i>r || j>c)
        return false;
    if(maze[i][j] == 'X')
        return false;
    
    ans[i][j] = 1;
    if(j+1<=c && maze[i][j+1]!='X'){
        bool right=solveIt(maze, ans, i, j+1, r, c);
        if(right){
            return true;
        }
    }
    if(i+1<=r && maze[i+1][j]!='X'){
        bool down=solveIt(maze, ans, i+1, j, r, c);
        if(down){
            return true;
        }
    }

    //Back track
    ans[i][j] = 0;

    return false;
}

int main(){

    int r, c;
    cin>>r>>c;

    char maze[1001][1001];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>maze[i][j];
        }
    }
    int ans[1001][1001] = {0};
    bool sol = solveIt(maze, ans, 0, 0, r-1, c-1);
    if(sol == false)
        cout<<"-1"<<endl;

    return 0;
}