#include<iostream>

using namespace std;

bool possible(int n, int m, int x, int y, int cmax){
    return cmax*x <= m + (n-cmax)*y;
}

int main(){

    int n, m, x, y;
    cin>>n>>m>>x>>y;

    //binary search to maximise the number of students who get the scholarship
    int f = 0;
    int l = n;
    int ans = 0;
    while(f<=l){
        int mid = (f+l)/2;
        if(possible(n,m,x,y,mid)){
            ans = mid;
            f = mid+1;
        }
        else
            l = mid-1;
    }

    cout<<ans<<endl;

    return 0;
}