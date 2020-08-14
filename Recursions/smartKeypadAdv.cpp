#include<iostream>
#include<string>

using namespace std;

string pad[] = { " ", " ", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string searchIn[] = {"prateek", "sneha", "deepak", "arnav", "shikha", "palak", "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void subsets(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        for(int m=0; m<11; m++){
            int find = searchIn[m].find(out);
            if(searchIn[m].find(out) != string::npos)
                cout<<searchIn[m]<<endl;
        }
        return;
    }

    int no = in[i] - '0';
    if(no == 1 || no == 0)
        subsets(in, out, i+1, j);
    else{
        for(int r=0; pad[no][r] != '\0'; r++){
            out[j] = pad[no][r];
            subsets(in, out, i+1, j+1);
        }
    }
}

int main(){
    char in[10];
    cin>>in;

    char out[10];
    subsets(in, out, 0, 0);

    return 0;
}