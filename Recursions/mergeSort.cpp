#include<iostream>
#define ll long long

using namespace std;

void merging(ll *a, ll f, ll l){
	ll m = (f+l)/2;

	ll i=f;
	ll j=m+1;
	ll k=f;

	ll temp[20000];
	while(i<=m && j<=l){
		if(a[i]<a[j]){
			temp[k++] = a[i++];
		}
		else
			temp[k++] = a[j++];
	}
	while(i<=m)
		temp[k++] = a[i++];
	while(j<=l)
		temp[k++] = a[j++];
	for(ll r=f; r<=l; r++)
		a[r] = temp[r];
}

void ms(ll *a, ll f, ll l){
	if(f >= l)
		return;
	
	ll m = (f+l)/2;
	ms(a, f, m);
	ms(a, m+1, l);

	merging(a, f, l);
}

int main() {

	ll n;
	cin>>n;

	long long int a[n];
	for(ll i=0; i<n; i++){
		cin>>a[i];
	}

	ms(a, 0, n-1);
	for(ll i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}