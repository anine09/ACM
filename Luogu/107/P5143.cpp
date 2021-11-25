#include <algorithm>
#include <cstdio>
using namespace std;

int n;
struct point
{
    int x, y, z;
};

struct point p[50100];

bool cmp(point x, point y)
{
    return x.z > y.z;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &p[i].x), &p[i].y, &p[i].z;
    }
    sort(p, p + n, cmp);
    double d = 0;
    for (int i = 0; i <= n; i++)
    {
        d += (abs((p[i].x - p[i + 1].x)) ^ 2+(abs((p[i].y-p[i+1].y)))^2+(abs((p[i].z-p[i+1].z))^2));
    }
    printf("%.3lf", d);
    return 0;
}
