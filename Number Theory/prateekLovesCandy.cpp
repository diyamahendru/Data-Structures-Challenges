//The challenge is to print the nth prime number.

#include<iostream>
#include<vector>
#define ll long long 

using namespace std;

int primes[100001];

void sieve(ll* p, ll n){
    
    p[1] = p[0] = 0;
    p[2] = 1;
    for(int i=3; i<n; i+=2){
        p[i] = 1;
    }

    for(ll i=3; i<n; i+=2){
        if(p[i] == 1){
            for(ll j=i*i; j<n; j+=i){
                p[j] = 0;
            }
        }
    }

    int k=0;
    for(ll i=2;i<n;++i){
        if(p[i]){
            primes[k]=i;
            k++;
        }
    }
}

int main(){

    ll n = 100001;
    ll p[n] = {0};

    sieve(p, n);

    int t;
    cin>>t;

    while(t--){
        ll no;
        cin>>no;
        cout<<primes[no-1]<<endl;
    }

    return 0;
}