#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n], a2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    map<int, int> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a = a1[i], b = a2[i];
        auto it1 = m.find(a);
        if (it1 == m.end())
        {
            m[a] = 1;
        }
        else
        {
            v.push_back(a);
            m.erase(a);
        }
        auto it2 = m.find(b);
        if (it2 == m.end())
        {
            m[b] = 1;
        }
        else
        {
            v.push_back(b);
            m.erase(b);
        }
    }

    sort(v.begin(), v.end());
    cout << "[" << v.front();
    for (int i = 1; i < v.size(); i++)
    {
        cout << ", " << v[i];
    }
    cout << "]";

    return 0;
}