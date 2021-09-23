#include <cstdio>
using namespace std;
int ISBN[100];
int right_ISBN;

int main(){


    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%1d", &ISBN[1], &ISBN[2], &ISBN[3], &ISBN[4], &ISBN[5], &ISBN[6], &ISBN[7], &ISBN[8], &ISBN[9], &ISBN[10]);
    for (int i = 1; i <= 9; i++)
    {
        right_ISBN = ISBN[i] * i;
    }
    right_ISBN %= 11;
    if (right_ISBN == ISBN[10])
    {

        printf("%s", "Right");
    }
    else
    {
        printf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%1d", ISBN[1], ISBN[2], ISBN[3], ISBN[4], ISBN[5], ISBN[6], ISBN[7], ISBN[8], ISBN[9], right_ISBN);
    }
    return 0;
}
