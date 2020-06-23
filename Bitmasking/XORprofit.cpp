#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int n = b-a;
    int xor_profit = 0;
    for(int i=0; i<=n; i++){
        int x = a+i;
        for(int j=1; j<=n-i; j++){
            int y = x+j;
            int xo = y^x;
            //cout<<xo<<endl;
            xor_profit = max(xor_profit, xo);
        }
    }
    cout<<xor_profit<<endl;
    return 0;
}