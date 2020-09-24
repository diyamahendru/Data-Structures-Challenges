#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n;
    cin>>n;

    queue<int> real;
    int ideal[n];

    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        real.push(x);
    }
    for(int i=0; i<n; i++){
        cin>>ideal[i];
    }

    int time=0;
    int idx=0;
    
    while(real.size()>0){
        if(ideal[idx]==real.front()){
            time++;
            idx++;
            real.pop();
        }
        else{
            int temp=real.front();
            real.pop();
            real.push(temp);
            time++;
        }
    }

    cout<<time<<endl;
    return 0;
}