//Doesnt pass for the test cases where the elements in the array are repeating :)
#include<iostream>
#include<algorithm>
#include<set>
#include<string>


using namespace std;
int sum = 0;

bool generate(int a[], int n, int i, int ans[], int j, int t){
    if(sum > t || i > n)
        return false;
    
    if(sum == t){
        for(int k=0; k<j; k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
        return false;
    }
    for(int k=i; k<n; k++){
        if(a[k] < t){
            ans[j] = a[k];
            sum += a[k];
            bool safe = generate(a, n, k+1, ans, j+1, t);
            if(safe)
                return true;

            ans[j] = 0;
            sum -= a[k];
        }
    }

    return false;

}

int main(){

    int n;
    cin>>n; 
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int target;
    cin>>target;

    int ans[n] = {0};

    sort(a, a+n);

    bool possible = generate(a, n, 0, ans, 0, target);

    return 0;
}