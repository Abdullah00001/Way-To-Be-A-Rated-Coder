#include <stdio.h>

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n)
                break;
            printf("%d ", j);
        };
        if (i == n - 1)
            break;
        printf("\n");
    };

    return 0;
};