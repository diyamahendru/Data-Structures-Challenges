//To count the number of strings of length N which have no consecutive 1s.
#include<iostream>

using namespace std;

int count(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n<0)
        return 0;
    int cnt = 0;
    cnt = count(n-1) + count(n-2);

    return cnt;
}

int main(){
    int n;
    cin>>n;

    cout<<count(n);
    return 0;
}