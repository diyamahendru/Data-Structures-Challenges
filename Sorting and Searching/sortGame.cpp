//The task is to print the name and salaries of only those emplyees whose salary is less than or equal to the limit provided.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class employee{
    public: 
        string name;
        int salary;

    employee(string n, int s){
        name = n;
        this->salary = s;
    }
};

bool comparison( employee a, employee b){
    if(a.salary == b.salary){
        return a.name<b.name;
    }
    return a.salary>b.salary;
} 

int main(){
    int limit;
    cin>>limit;

    int n;
    cin>>n;

    string a;
    int b;
    vector<employee> v;

    for(int i; i<n; i++){
        cin>>a>>b;
        employee temp(a,b);
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), comparison);

    
    for(auto c:v){
        if(c.salary>=limit)
            cout<<c.name<<" "<<c.salary<<endl;
    }

    return 0;
}