#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int result = a - b;
    if (result >= 0)
    {
        printf("%lld\n", result);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
};