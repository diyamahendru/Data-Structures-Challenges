#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int bits[t];

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int ans = 0;
        while(n>0){
            n = n&(n-1);
            ans++;
        bits[i] = ans;
        }
    }

    for(int j=0; j<t; j++)
        cout<<bits[j]<<endl;

}