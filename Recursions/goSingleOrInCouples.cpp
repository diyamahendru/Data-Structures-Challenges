//The question is to find the number of ways N people can go to a party either single or as couples.

#include<iostream>

using namespace std;

int count(int n){
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 3;
    int ans = 0;
    ans = count(n-1) + (n-1)*count(n-2);

    return ans;
}

int main(){
     int n;
     cin>>n;

     cout<<count(n)<<endl;

    return 0;
}