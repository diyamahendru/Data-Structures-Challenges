#include<iostream>

using namespace std;

bool solveIt(char maze[][11], int ans[][11], int i, int j, int r, int c){
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

    if(i>r || j>c || i<0 || j<0)
        return false;
    if(maze[i][j] == 'X')
        return false;
    
    ans[i][j] = 1;
    bool right, down, up, left;
    if(j+1<=c && maze[i][j+1]=='O'){
        right=solveIt(maze, ans, i, j+1, r, c);
        if(right){
            return true;
        }
    }
    if(i+1<=r && maze[i+1][j]=='O' && !right){
        down=solveIt(maze, ans, i+1, j, r, c);
        if(down){
            return true;
        }
    }
    if(i-1>=0 && maze[i-1][j]=='O' && !right && !down){
        up = solveIt(maze, ans, i-1, j, r, c);
        if(up)
            return true;
    }
    if(j-1>=0 && maze[i][j-1]=='O' && !right && !down && !up){
        left = solveIt(maze, ans, i, j-1, r, c);
        if(left)
            return true;
    }


    //Back track
    ans[i][j] = 0;

    return false;
}

int main(){

    int r, c;
    cin>>r>>c;

    char maze[11][11];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>maze[i][j];
        }
    }
    int ans[11][11] = {0};
    bool sol = solveIt(maze, ans, 0, 0, r-1, c-1);
    if(sol == false)
        cout<<"NO PATH FOUND"<<endl;

    return 0;
}