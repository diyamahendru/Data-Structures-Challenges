#include <iostream>
using namespace std;
int main(){
    string s1,s2,s3="";
    int i,j,t;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>s1>>s2;
        for(i=0;i<s1.length();i++){
            if(s1[i]==s2[i])
                s3.append("0");
            else 
                s3.append("1");
        }
        cout<<s3;
        cout<<endl;
        s3.clear();
    }
    return 0;
}
