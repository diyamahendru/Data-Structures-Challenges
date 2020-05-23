//Input is 1<=N<=10^6 0<=Ai<=10^6

#include<iostream>

using namespace std;

int main(int argc, char *argv[]){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int idx[1000000]={0};
    for(int j=0; j<n; j++){
        idx[a[j]]++;
    }

    for(int k=0; k<1000000; k++){
        while(idx[k]!=0){
            cout<<k<<" ";
            idx[k]--;
        }
    }

    return 0;
}