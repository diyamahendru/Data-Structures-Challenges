#include<iostream>
#include<string>

using namespace std;

int main(){
    int k;
    cin>>k;

    string s;
    cin>>s;

    int l;
    l=s.length();

    int freq[2] = {0};
    int ans = 0, left = 0;
    for(int i=0; i<l; i++){
        char temp = s[i];
        freq[temp-'a']++;
        if(min(freq[0], freq[1])>k){
            freq[s[left]-'a']--;
            left++;
        }
        else
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}