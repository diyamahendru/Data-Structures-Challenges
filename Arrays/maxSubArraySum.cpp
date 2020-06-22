//Kadane's algorithm

#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int finalsum[t] = {0};

    for(int i=1; i<=t; i++){
        int n=0;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int maxsum = 0;
        int currentsum = 0;
        for(int p=0; p<n; p++){
            currentsum = currentsum + arr[p];
            if(currentsum < 0){
                currentsum = 0;
            }
            maxsum = max(maxsum, currentsum);
        }

        finalsum[i-1] = maxsum;
    }

    for(int k=0; k<t; k++){
        cout<<finalsum[k]<<endl;
    }

    return 0;
}
