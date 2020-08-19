//This question is not done through backtracking rather it is done through subsets method.

#include<bits/stdc++.h>
using namespace std;


int generate(int n){
    if(n==1)
        return 2;
    else if(n==2)
        return 3;
    else
        return generate(n-1)+generate(n-2);
}

int main(){

    int t;
    cin>>t;
    int idx=t;
    while(t--){
        int n;
        cin>>n;
        cout<<"#"<<(idx-t)<<" : "<<generate(n)<<endl;

    }

}