//The question problem is to sort the array lexiographically but if a string is a prefix of another string then sort in descending order of length.

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get();

    string s[n];
    for(int i=0; i<n; i++){
        getline(cin, s[i]);
    }

    sort(s, s+n);

    int index;
    for(int i=0; i<n-1; i++){
        if((index = s[i+1].find(s[i], 0)) != string::npos)
            swap(s[i], s[i+1]);
    }

    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }

    return 0;
}