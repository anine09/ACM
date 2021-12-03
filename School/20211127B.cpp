#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int n;
struct the_num
{

    int a[10000];
    long long sum[10000];

    /*
    vector<int> a;
    vector<long long>sum;
    */
} num;

int main()
{
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num.a[i];
        sum += num.a[i] * (pow(10, n - i));
        num.sum[i] = sum;
    }
    sort(num.sum, num.sum + n);
    /*
    for (int k = 0; k < n;k++){
        if(num.a[k]==0)cout<<num.sum[0] + 2;
        else num.sum[0] + 1;
    }
    */
    cout << num.sum[0] + 1;
    return 0;
}
