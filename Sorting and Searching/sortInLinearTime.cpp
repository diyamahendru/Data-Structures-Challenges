#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
         cin>>a[i];
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
            mid++;
        else{
            swap(a[mid], a[high]);
            high--;
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;
}



// int main(){
//     int n;
//     cin>>n;

//     int a[n];
//     int idx[3]={0};
//     for(int i=0; i<n; i++)
//         cin>>a[i];

//     for(int i=0; i<n; i++){
//         int x;
//         x = a[i];
//         idx[x]++;
//     }

//     for(int i=0; i<3; i++){
//         while(idx[i]>0){
//             cout<<i<<endl;
//             idx[i]--;
//         }
//     }
//     return 0;
// }