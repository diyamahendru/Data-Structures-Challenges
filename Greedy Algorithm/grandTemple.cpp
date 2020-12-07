#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n], y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x, x + n);
    sort(y, y + n);
    int dx = x[1] -x[0]- 1;
    int dy = y[1]- y[0] - 1;

    for (int i = 2; i < n; i++)
    {
        dx = max(dx, x[i] - x[i - 1] - 1);
        dy = max(dy, y[i] - y[i - 1] - 1);
    }

    cout << dx * dy << endl;
    return 0;
}