#include <cstdio>
#include <iostream>
using namespace std;

int apple_hight[15];
int taotao_hight;

int is_get_apple(int apple[15]);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> apple_hight[i];
    }
    cin >> taotao_hight;
    cout << is_get_apple(apple_hight);
    return 0;
}

int is_get_apple(int apple[15])
{
    int count=0;
    for (int i = 1; i <= 10; i++)
    {
        if (apple[i] <= taotao_hight + 30)
        {
            count++;
        }
    }
    return count;
}