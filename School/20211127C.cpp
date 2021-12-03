#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

long long n;

int top_noip = -1;
int top_sdoi[10];

struct play
{
    string name;
    int noip;
    int sdoi[10];
    int save[10];
    double std[10];
    double sum = 0;
    int top_noip = 0;
    int top_sdoi[10];
} p[999999];


int main()
{
    memset(top_sdoi,-1,sizeof(top_sdoi));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].noip >> p[i].sdoi[0] >> p[i].sdoi[1] >> p[i].sdoi[2] >> p[i].sdoi[3];
        if(p[i].noip>top_noip)
            top_noip = p[i].noip;
        p[i].save[1] = p[i].sdoi[1];
        p[i].save[2] = p[i].sdoi[2];
        p[i].save[3] = p[i].sdoi[3];
        p[i].save[0] = p[i].sdoi[0];
    }
    for (int m = 0; m < n;m++){
        for (int l = 0; l < 0;l++)
            if (p[l].sdoi[m]>top_sdoi[m])
                top_sdoi[m] = p[l].sdoi[m];
    }
        for (int k = 0; k < n; k++)
        {
            //sort(p[k].sdoi, p[k].sdoi + 4,cmp);
            for (int m = 0; m < 4; m++)
            {
                p[k].std[m] = (p[k].save[m] * 300) / top_sdoi[m];
            }
            p[k].sum = ((p[k].noip* 600)/top_noip)* 0.25 + 0.25 * (p[k].std[0] + p[k].std[1]) + 0.5 * (p[k].std[3] + p[k].std[2]);
        }
    cout << p[1].name << " " << p[1].sum;

    return 0;
}