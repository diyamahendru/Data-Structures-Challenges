#include <iostream>
#include <unordered_set>

using namespace std;

int find(int a[], int n)
{
    unordered_set<int> s;
    int j = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n and s.find(a[j]) == s.end())
        {
            s.insert(a[j]);
            j++;
        }
        ans += ((j - i) * (j - i + 1)) / 2;
        s.erase(a[i]);
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << find(a, n) << endl;

    return 0;
}