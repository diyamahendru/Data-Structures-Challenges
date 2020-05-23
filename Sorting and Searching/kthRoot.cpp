#include<iostream>
#include<cmath>

using namespace std;

int k_root(long long int n, int k){
    long long int s = 1;
    long long int e = n;
    long long int ans = -1;

    while(s<=e){
        long long int mid = (s+e)>>1; //same as divide by 2

        if(pow(mid, k) == n){
            return mid;
        }
        else if(pow(mid, k) <n){
            ans = mid;
            s = mid+1;
        }
        else
            e = mid-1;
    }

    return ans;
}

int main(){

    int t;
    cin>>t;
    int results[t];

    for(int i=0; i<t; i++){
        long long int n;
        int k;
        cin>>n>>k;
        results[i] = k_root(n, k);
    }

    for(int j=0; j<t; j++){
        cout<<results[j]<<endl;
    }
    return 0;
}