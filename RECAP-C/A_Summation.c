#include <stdio.h>

int main()
{
    long long int N, sum = 0;
    scanf("%lld", &N);
    long long int A[N];
    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (long long int i = 0; i < N; i++)
    {
        long long int value = A[i];
        sum += value;
    }
    if (sum < 0)
    {
        sum = -sum;
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", sum);
    }

    return 0;
};