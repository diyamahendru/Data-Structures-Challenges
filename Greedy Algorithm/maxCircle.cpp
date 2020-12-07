#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second<p2.second;
}

int main(){

    int n, c, r;
    cin>>n;

    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        cin>>c>>r;
        v.push_back(make_pair(c-r, c+r));
    }

    sort(v.begin(), v.end(), compare);
    
    int ans=1;
    int prev=v[0].second;
    for(int i=1; i<n; i++){
        if(v[i].first>=prev){
            ans++;
            prev=v[i].second;
        }
    }
    cout<<(n-ans)<<endl;

    return 0;
}