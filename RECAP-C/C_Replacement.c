#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > 0)
        {
            arr[i] = 1;
        }
        else if (num == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 2;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
};