#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t,n,d;
    cin>>t;

    while(t--){

        priority_queue<int> left; //max heap
        priority_queue<int, vector<int>, greater<int>> right; //min heap

        cin>>n>>d;

        left.push(d);
        int median=d;
        cout<<median<<" ";

        for(int i=1; i<n; i++){
            cin>>d;
            
            if(left.size()>right.size()){
                if(d<median){
                    right.push(left.top());
                    left.pop();
                    left.push(d);
                }
                else{
                    right.push(d);
                }
                median=(right.top()+left.top())/2;
            }
            else if(left.size()==right.size()){
                if(d<median){
                    left.push(d);
                    median=left.top();
                }
                else{
                    right.push(d);
                    median=right.top();
                }
            }
            else{
                if(d>median){
                    left.push(right.top());
                    right.pop();
                    right.push(d);
                }
                else{
                    left.push(d);
                }
                median=(right.top()+left.top())/2;
            }
            cout<<median<<" ";
        }
        cout<<endl;
    }
    return 0;
}