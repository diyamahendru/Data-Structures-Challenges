#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.second;
}

void tellPossible(vector<pair<int, int>> v, int n, int D, int F)
{
    int x = 0, flag = 0, prev = 0, res = 0;
    priority_queue<int> q;
    while (x < n)
    {
        if (F >= v[x].first - prev)
        {
            F = F - (v[x].first - prev);
            q.push(v[x].second);
            prev = v[x].first;
        }
        else
        {
            if (q.empty())
            {
                flag = 1;
                break;
            }
            //refill the truck
            F += q.top();
            q.pop();
            res++;
            continue;
        }
        x++;
    }

    if (flag == 1)
    {
        cout << -1 << endl;
        return;
    }

    D = D - v[n - 1].first;
    //Can reach
    if (F >= D)
    {
        cout << res << endl;
        return;
    }

    //otherwise
    while (F < D)
    {
        //Can't reach
        if (q.empty())
        {
            flag = 1;
            break;
        }
        //otherwise
        F += q.top();
        q.pop();
        res++;
    }
    //Sorry man
    if (flag == 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << res << endl;
    return;
}

int main()
{

    int n, d, f, D, F;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> d >> f;
        v.push_back(make_pair(d, f));
    }

    sort(v.begin(), v.end(), compare);

    cin >> D >> F;

    for (int i = 0; i < n; i++)
    {
        v[i].first = D - v[i].first;
    }

    tellPossible(v, n, D, F);
    return 0;
}