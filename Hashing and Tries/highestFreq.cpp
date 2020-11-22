#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<int, int> m;
    
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        m[t]++;
    }

    int maximum=-1;
     for(auto p:m){
        if(p.second>m[maximum]){
            maximum=p.first;
        }
    }

    cout<<maximum<<endl;

    return 0;
}