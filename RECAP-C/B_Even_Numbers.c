#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number == 1)
        printf("-1\n");
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
        else
            continue;
    };

    return 0;
};