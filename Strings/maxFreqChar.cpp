#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    int l;
    l = s.length();

    int freq[95]={0};

    for(int i=0; i<l; i++){
        freq[s[i]-' ']++;
    }

    int largest=0;
	int idx;
    for(int j=0; j<95; j++){
        if(freq[j]>largest){
            largest = freq[j];
			idx = j;
        }
    }

    char alpha = idx + ' ';
    cout<<alpha;

    return 0;
}