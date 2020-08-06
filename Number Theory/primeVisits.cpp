//The challenge is to find the prime numbers between two given numbers.

#include<iostream>
#define ll long long 

using namespace std;

void seive(int *p, int n){
    for(int i=3; i<=n; i+=2){
        p[i] = 1;
    }

    for(ll i=3; i<=n; i+=2){
        if(p[i]==1){
            for(ll j=i*i; j<n; j+=i){
                p[j] = 0;
            }
        }
    }

    p[2] = 1;
    p[1] = p[0] = 0;
}

int main(){

    ll n = 10000;

    int primes[n] = {0};
    seive(primes, n);

    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int c=0;
        for(int i=a; i<=b; i++){
            if(primes[i] == 1){
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}