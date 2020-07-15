//To calculate the LCM, a*b is divided by LCM.
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

    int g = gcd(a, b);

    int res = (a*b)/g;

    cout<<res<<endl;
    return 0;
}