//The challenge is to print all the prime numbers using the sieve method.

#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main(){
    ll n = 500000;
	ll num;
    cin>>num;

    int p[n] = {0};
    vector<int> primes;

    for(int i=3; i<=n; i+=2){
        p[i] = 1;
    }

    p[2] = 1;
    p[1] = p[0] = 0;

    for(ll i=3; i<=n; i+=2){
        if(p[i] == 1){
            for(ll j=i*i; j<=n; j = j+i){
                p[j]=0;
            }
        }
    }

    for(ll i=1; i<=n; i++){
        if(p[i] == 1)
            primes.push_back(i);
    }

    cout<<primes[num-1]<<endl;

    return 0;
}