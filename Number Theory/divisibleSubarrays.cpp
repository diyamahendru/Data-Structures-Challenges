#include<iostream>
#include<cstring>

using namespace std;

#define ll long long

int main(){
    ll arr[100000], freq[100000];

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int s = 0;
        memset(freq, 0, sizeof(freq));
        freq[0] = 1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s += a[i];
            s %= n;
            s = (s+n)%n;
            freq[s]++;
        }

        ll res = 0;
        for(int i=0; i<n; i++){
            ll x = freq[i];
            res += (x*(x-1))/2;
        }

        cout<<res<<endl;
    }

    return 0;
}