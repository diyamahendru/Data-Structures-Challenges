#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

class node{
    public:
    char data;
    bool terminal;
    unordered_map<char, node*> child;

    node(int d){
        data=d;
        terminal=false;
    }
};

class trie{
    node *root;
    int cnt;

    public:
        trie(){
            root=new node('\0');
            cnt=0;
        }

        void insert(string s){
            node* temp=root;
            for(int i=0; s[i]!='\0'; i++){
                char ch=s[i];
                if(temp->child.count(ch)){
                    temp=temp->child[ch];
                }
                else{
                    node* n=new node(ch);
                    temp->child[ch]=n;
                    temp=n;
                }
            }
            temp->terminal=true;
        }

        bool findTemp(string s){
            node* temp=root;
            //To find the prefix in trie
            for(int i=0; s[i]!='\0'; i++){
                char ch=s[i];
                if(temp->child.count(ch)==1){
                    temp=temp->child[ch];
                }
                else{
                    return false;
                }
            }

            vector<string> v;
            print(s,v,temp);
            sort(v.begin(), v.end());
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<endl;
            }
            return true;
        }

        void print(string s, vector<string> &v, node* temp){
            if(temp->terminal){
                v.push_back(s);
            }
            for(auto it=temp->child.begin(); it!=temp->child.end(); it++){
                s+=it->second->data;
                print(s,v,it->second);
                s.pop_back();
            }
        }

};

int main(){
    int n;
    cin>>n;
    trie t;
    string s;
    while(n--){
        cin>>s;
        t.insert(s);
    }
    int q;
    cin>>q;
    while(q--){
        cin>>s;
        bool temp=t.findTemp(s);
        if(!temp){
            cout<<"No suggestions"<<endl;
            t.insert(s);
        }

    }
	return 0;
}