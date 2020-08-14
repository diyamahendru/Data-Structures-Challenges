//To print Yes if the sum of any subset is 0.

#include<iostream>

using namespace std;

bool subsets(int *in, int n, int i, int sum, int cnt){
    if(i == n){
        if(sum == 0 && cnt > 0)
            return true;
        else
            return false;
    }

    return subsets(in, n, i+1, sum, cnt) || subsets(in, n, i+1, sum+in[i], cnt+1);
}


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(subsets(a, n, 0, 0, 0))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}