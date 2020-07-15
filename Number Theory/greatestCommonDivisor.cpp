// The challenge is to find the GCD of two numbers provided using recursion.

#include<iostream>

using namespace std;

int gcd(int x, int y){
    if(y==0)
        return x;
    else
        return gcd(y, x%y);
}

int main(){
    int a, b;
    cin>>a>>b;

    int res = gcd(a, b);

    cout<<res<<endl;
    return 0;
}