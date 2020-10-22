#include <iostream>
#include <queue>

using namespace std;

int main()
{

    int q, k, idx=0;
    cin >> q >> k;

    priority_queue<long long int> pq;

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            long long int x, y, d;
            cin >> x >> y;
            d = x * x + y * y;
            if(idx<k){
                pq.push(d);
                idx++;
            }
            else if(pq.top()>d){
                pq.pop();
                pq.push(d);
            }
        }
        else if(type==2){
            cout<<pq.top()<<endl;
        }
    }

    return 0;
}