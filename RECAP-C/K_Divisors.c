#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    for (long long int i = N; i >= 1; i--)
    {
        if (N % i == 0)
        {
            printf("%lld\n", N / i);
        }
        else
        {
            continue;
        }
    };

    return 0;
};