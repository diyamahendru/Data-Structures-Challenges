#include<iostream>
#include<string>

int stringToInt(char a[], int n){
    if(n == 0){
        return 0;
    }
    int ans = a[n-1] - '0';
    int smolans = stringToInt(a, n-1);
    
    return smolans*10 + ans;
}

using namespace std;

int main(){
    char a[10];
    cin>>a;
    int len = 0;
    for(int i=0; a[i]!= '\0'; i++){
        len++;
    }
    cout<<stringToInt(a, len);
    return 0;

}