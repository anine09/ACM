#include <stdio.h>
void main()
{
    char c;
    printf("Enter A or a or B or b or other:");
    c = getchar();
    switch (c)
    {
    case 'A':
        printf("good morning!\n");
        break;
    case 'a':
        printf("good morning!\n");
        break;
    case 'b':
        printf("good night!\n");
        break;
    case 'B':
        printf("good night!\n");
        break;
    default:
        printf("Input error!\n");
    }
}
