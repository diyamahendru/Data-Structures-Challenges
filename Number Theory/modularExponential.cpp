//We know that (x^n)%m can be written as (x%m*(x%m*....)%m)%m

#include<iostream>
#include<cmath>

#define ll long long

using namespace std;

int mod_exponentiation(ll x, ll n, ll m){
    int ans = 1;

    while(n){
        ans = ((ans%m)*(x%m))%m;
        n--;
    }
    return ans;
}

int main(){

    ll a, b, c;
    cin>>a>>b>>c;

    int res = mod_exponentiation(a, b, c);

    cout<<res<<endl;

    return 0;
}