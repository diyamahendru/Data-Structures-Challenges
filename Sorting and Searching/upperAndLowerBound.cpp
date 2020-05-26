#include<iostream>

using namespace std;

int upper_bound(int a[], int n, int key){
    int start=0;
    int end=n-1;
    int answer=-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid] == key){
            answer = mid;
            start = mid+1;
        }
        else if(a[mid]>key)
            end = mid-1;
        else
            start = mid+1;
    }
    return answer;
}

int lower_bound(int a[], int n, int key){
    int start = 0;
    int end = n-1;
    int answer = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid]==key){
            answer = mid;
            end = mid-1;
        }
        else if(a[mid]>key)
            end = mid-1;
        else
            start = mid+1;
    }
    return answer;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int q;
    cin>>q;

    int key[q];
    for(int j=0; j<q; j++){
        cin>>key[j];
    }

    for(int k=0; k<q; k++){
        int ub, lb;
        ub = upper_bound(a, n, key[k]);
        lb = lower_bound(a, n, key[k]);
        cout<<lb<<" "<<ub<<endl;
    }

    return 0;

}