#include <stdio.h>

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }
    // int i = 4;
    // while (i >= 0)
    // {
    //     printf("%d ", arr[i]);
    //     i--;
    // }

    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    printf("Total Array Sum Is : %d", sum);

    return 0;
};