#include<iostream>

using namespace std;

void steps(int n, char s, char h, char d){
    if(n == 0)
        return;
    
    //moving the n-1 rings to helper tower
    steps(n-1, s, d, h);

    cout<<"Moving ring "<<n<<" from "<<s<<" to "<<d<<endl;

    //moving the n-1 rings from helper to destination tower.
    steps(n-1, h, s, d);
}

int main(){
    int n; 
    cin>>n;

    steps(n, 'A', 'C', 'B');

    return 0;
}