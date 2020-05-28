#include<iostream>
#define lli long long int

using namespace std;

bool possible(lli n, lli m, lli x, lli y, lli cmax){
    if(cmax*x <= m + (n-cmax)*y)
        return true;
    else 
        return false;
}

int main(){

    lli n, m, x, y;
    cin>>n>>m>>x>>y;

    //binary search to maximise the number of students who get the scholarship
    lli f = 0;
    lli l = n;
    lli ans = 0;
    while(f<=l){
        lli mid = (f+l)/2;
        if(possible(n,m,x,y,mid)){
            ans = max(mid, ans);
            f = mid+1;
        }
        else
            l = mid-1;
    }

    cout<<ans<<endl;

    return 0;
}