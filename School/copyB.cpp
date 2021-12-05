#include <iostream>
using namespace std;

struct robot
{
    int op;
    long long x, y, z;
    bool undo = true;
    bool run = true;
} r[1000000], d[1000000];
long long n;

int main()
{

    cin >> d[0].x >> d[0].y >> d[0].z;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> r[i].op;
        if (r[i].op == 2)
        {
            r[i].undo = false;
        }
        else if (r[i].op == 1)
            cin >> r[i].x >> r[i].y >> r[i].z;
    }
    for (int i = 1; i <= n; i++)
    {
        if (r[i].op == 2)
        {
            for (int m = i - 1; m >= 1; m--)
            {
                if (r[m].undo&&r[m].op == 1)
                {
                    r[m].run = false;
                    r[m].undo = false;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (r[i].run)
        {
            if (r[i].op == 1)
            {
                d[i].x = r[i].x;
                d[i].y = r[i].y;
                d[i].z = r[i].z;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        d[i].x += d[i - 1].x;
        d[i].y += d[i - 1].y;
        d[i].z += d[i - 1].z;
    }
    cout << d[n].x << " " << d[n].y << " " << d[n].z;
    return 0;
}