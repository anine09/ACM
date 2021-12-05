#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct player{
    int num;
    int score;
    bool is_up = false;
} p[10000];

int n, m;
int the_score;
int ans = 0;

bool cmp_1(player a, player b){
    return a.score > b.score;
}

bool cmp_2(player a,player b){
    if(a.score==b.score)
        return a.num < b.num;
    return a.score > b.score;
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].num >> p[i].score;
    }

    sort(p, p + n, cmp_1);
    int the_line = floor(m * 1.5);
    the_score = p[the_line-1].score;

    
    for (int i = 0; i < n; i++)
    {
        if(p[i].score>=the_score){
            p[i].is_up = true;
            ans++;
        }
    }
    sort(p, p + ans, cmp_2);
    cout << the_score << " " << ans<<endl;
    for (int i = 0; i < ans; i++)
    {
        cout << p[i].num << " " << p[i].score<<endl;
    }
    
    return 0;
}