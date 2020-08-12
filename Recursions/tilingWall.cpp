#include<iostream>

using namespace std;

long long int func(long long int n, long long int m){
    if(0 <= n && n <= m)
        return 1;
    else
        return func(n-1, m) + func(n-m, m);
}

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n, m;
        cin>>n>>m;
        cout<<func(n, m)<<endl;
    }

    return 0;
}