#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#define LEN 1004
using namespace std;

int a[LEN], b[LEN], c[LEN];

void clear(int a[])
{
    memset(a, 0, sizeof(a));
}

void read(int a[])
{
    static char s[LEN - 1];
    scanf("%s", s);

    clear(a);

    int len = strlen(s);
    for (int i = 0; i < len; ++i)
    {
        a[len - i - 1] = s[i] - '0';
    }
}

void print(int a[])
{
    int i;
    for (i = LEN - 1; i >= 1; --i)
    {
        if (a[i] != 0)
            break;
    }
        
        if (a[i] + '0' < 58 && a[i] + '0' >= 56)
            if (a[i - 1] >=5)
                cout << "4";
            else
                cout << "3";
        if (a[i] + '0' < 56 && a[i] + '0' >= 55)
            if (a[i - 1] >=5)
                cout << "3";
            else
                cout << "2";
        if (a[i] + '0' < 55 && a[i] + '0' >= 54)
            cout << "2";
        if (a[i] + '0' < 54 && a[i] + '0' >= 48)
            cout << "0";
    
    /*
    for ( ; i >=0; --i)
    {
        
        putchar(a[i] + '0');
        
    }
    */
}

/*
void add(int a[],int b[],int c[]){
    clear(c);
    for (int i = 0; i < LEN-1; ++i)
    {
        c[i] += a[i] + b[i];
        if(c[i]>=10){
            c[i + 1] += 1;
            c[i] -= 10;
        }
    }
    
}
*/

int main()
{
    read(a);
    /*
    read(b);
    add(a, b, c);
    */
    print(a);
    return 0;
}