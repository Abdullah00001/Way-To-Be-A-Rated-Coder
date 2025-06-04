#include <stdio.h>

int main()
{
    char X;
    scanf(" %c", &X);
    int toNumber = X;
    if (toNumber % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    };

    return 0;
};