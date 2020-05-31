//To find the maximum in the array.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
vector <int> arr;
int n;
cin>>n;
int temp;
for(int i=0; i<n; i++){
cin>>temp;
arr.push_back(temp);
}

sort(arr.begin(), arr.end());
cout<<arr[n-1];

return 0;
}