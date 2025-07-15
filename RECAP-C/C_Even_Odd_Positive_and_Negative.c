#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
            even += 1;
        if (numbers[i] % 2 != 0)
            odd += 1;
        if (numbers[i] > 0)
            positive += 1;
        if (numbers[i] < 0)
            negative += 1;
    };
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
};