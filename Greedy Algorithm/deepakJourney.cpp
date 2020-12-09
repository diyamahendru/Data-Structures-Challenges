#include <iostream>

using namespace std;

int main()
{

    long long int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        long long int c[n], l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        long long int min = c[0], fuel = c[0] * l[0];
        for (int i = 1; i < n; i++)
        {
            if (c[i] >= min)
            {
                fuel += l[i] * min;
                continue;
            }
            else
            {
                min = c[i];
                fuel += l[i] * min;
                continue;
            }
        }
        cout << fuel << endl;
    }

    return 0;
}