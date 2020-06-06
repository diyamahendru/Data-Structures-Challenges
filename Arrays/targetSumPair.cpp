#include<iostream>

using namespace std;

void targetSumpair(int arr[],int N, int target){
    int a, b;

    for(int i=0; i<N; i++){
        a = arr[i];
        for(int j=i+1; j<N; j++){
            b = arr[j];
            if(a+b==target){
				if(a<b){
					cout<<a<<" and "<<b<<endl;
				}
				else 
					cout<<b<<" and "<<a<<endl;
                
            }
        }
    }

}

int main(){
    int N;
    cin>>N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    targetSumpair(arr, N, target);

    return 0;

}