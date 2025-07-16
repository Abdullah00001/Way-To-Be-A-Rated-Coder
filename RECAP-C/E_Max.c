#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    };
    for (int i = 0; i < N; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            continue;
        };
        continue;
    };
    printf("%d", max);

    return 0;
};