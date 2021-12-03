#include <stdio.h>

char string[9999999];
char s[9999999];



void is_yuanyin(char a[], char b[]);

int main()
{
    gets(s);
    is_yuanyin(s,string);
    return 0;
}

void is_yuanyin(char a[], char b[])
{
    int i = 0;
    int count = 0;
    while (a[i]!='\0')
    {

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            b[count] = a[i];
            count++;
        }
        i++;
    }
    puts(b);
}