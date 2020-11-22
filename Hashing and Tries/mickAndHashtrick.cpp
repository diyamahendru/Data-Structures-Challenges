#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second<b.second;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    unordered_map<int, int> m;
    int cnt=0;

    for(int i=0; i<n; i++){
        m[a[i]]=cnt;
        cnt++;
    }

    vector<pair<int, int>> v;

    for(auto p:m){
        v.push_back(make_pair(p.first, p.second));
    }

    sort(v.begin(), v.end(), cmp);

    for(auto p:v){
        cout<<p.first<<endl;
    }


    return 0;
}