#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, pair<int, int>> node;

int main()
{
    int k, n;
    cin >> k >> n;

    int arr[k][n];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    priority_queue<node, vector<node>, greater<node>> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i][0], {i, 0}});
    }

    while (!pq.empty())
    {
        node current = pq.top();
        pq.pop();
        int e = current.first;
        int x = current.second.first;
        int y = current.second.second;

        cout << e << " ";
        if (y + 1 < n)
        {
            pq.push({arr[x][y + 1], {x, y + 1}});
        }
    }

    return 0;
}