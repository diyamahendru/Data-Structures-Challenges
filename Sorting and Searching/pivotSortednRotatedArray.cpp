#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int idx;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		if(a[i]>a[i+1]){
			idx = i;
			break;
		}
	}

	cout<<idx;

	return 0;
}