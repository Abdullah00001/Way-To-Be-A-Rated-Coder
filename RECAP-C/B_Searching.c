#include <stdio.h>

int main()
{
    long long int N, X;
    scanf("%lld", &N);
    long long int arr[N];
    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &X);
    long long int xPosition = -1;
    for (long long int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            xPosition = i;
            break;
        }
        else
        {
            continue;
        }
    }
    if (xPosition != -1)
    {
        printf("%lld\n", xPosition);
    }
    else
    {
        printf("%d\n", -1);
    }
    return 0;
};