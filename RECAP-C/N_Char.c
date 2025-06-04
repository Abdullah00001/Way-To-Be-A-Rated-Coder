#include <stdio.h>

int main()
{
    char X;
    scanf(" %c", &X);
    if (X >= 65 && X <= 90)
    {
        printf("%C", X + 32);
    }
    else
    {
        printf("%c", X - 32);
    };
    return 0;
};