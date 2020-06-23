// Hulk can jump in powers of 2. The question is to find the minimum number of moves required by hulk to reach the nth step.

#include<iostream>

using namespace std;

int main(){

    int t, n;
    cin>>t;
    int moves[t];

    for(int i=0; i<t; i++){
        cin>>n;
        int ans = 0;
        int q, r;
        while(n>0){
            r = n%2;
            ans += r;
            n /= 2;
        }
        moves[i] = ans;
    }

    for(int j=0; j<t; j++)
        cout<<moves[j]<<endl;

    return 0;

}