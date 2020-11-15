#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, bool> m;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            m[temp] = true;
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            auto it = m.find(x);
            if (it != m.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}