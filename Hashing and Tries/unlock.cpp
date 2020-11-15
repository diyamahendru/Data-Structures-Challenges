#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> m;
    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }

    for (int i = n; i >= 1 && k > 0; i--)
    {
        int best = n - i + 1;
        int in;
        if (m.count(i))
        {
            in = m[i];
        }

        if (best != in)
        {
            swap(a[best], a[in]);
            m[a[best]] = best;
            m[a[in]] = in;
            k--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}