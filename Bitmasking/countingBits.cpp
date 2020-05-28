#include<iostream>

using namespace std;

int countBits(int n){
    int ans = 0;
    while(n>0){
        n = n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int q;
    cin>>q;
    int num[q][2];
    int ans[q] = {0};
    int a, b, temp;

    for(int i=0; i<q; i++){
        cin>>num[i][0]>>num[i][1];
    }
    
    for(int j=0; j<q; j++){
        a = num[j][0];
        b = num[j][1];
        for(int k=a; k<=b; k++){
            temp = countBits(k);
            ans[j] += temp;
        }
    }
    for(int l=0; l<q; l++)
        cout<<ans[l]<<endl;
    return 0;
}